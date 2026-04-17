
// Code do Isoppo


#include <stdio.h>
#include <stdlib.h>

struct robot {
    int robotID;
    int chargeToDo;
    struct robot *nextRobot;
};

struct list {
    struct robot *first;
    struct robot *last;
    int IdMax;
    struct robot *aux;
};

void printList (struct list *list){
    if (!list || !list->first)
        return;
    
    struct robot *aux = list->first;
    while (aux->nextRobot && aux->robotID < aux->nextRobot->robotID){
        printf("robo: %d | carga: %d\n", aux->robotID, aux->chargeToDo);
        aux = aux->nextRobot;
    }

    printf("robo: %d | carga: %d\n", aux->robotID, aux->chargeToDo);
    return;
}

struct robot *createRobot (struct list *list){
    struct robot *newRobot = malloc (sizeof(struct robot));
    list->IdMax++;
    newRobot->robotID = list->IdMax;
    newRobot->chargeToDo = rand() % 6;
    newRobot->nextRobot = NULL;

    return newRobot;
}

void insertRobot (struct list *list, struct robot *newRobot){
    if (!list->first){
        list->first = newRobot;
        list->last = newRobot;
        list->aux = newRobot;
        newRobot->nextRobot = newRobot;
    }
    else {
        newRobot->nextRobot = list->first;
        list->last->nextRobot = newRobot;
        list->last = newRobot;
    }
}

void removeRobot (struct list *list, int robotRemoveID){
    struct robot *aux = list->first;
    struct robot *aux2 = aux->nextRobot;

    if (list->first == list->last){
        list->first = NULL;
        list->last = NULL;
        free (aux);
        return;
    }

    if (robotRemoveID == aux->robotID){
        list->first = aux2;
        list->last->nextRobot = aux2;
        list->aux = aux2;
        free (aux);
        return;
    }
    
    while (aux2->robotID != robotRemoveID){
        aux = aux2;
        aux2 = aux2->nextRobot;
    }

    aux->nextRobot = aux2->nextRobot;
    
    list->aux = aux->nextRobot;

    if (aux->nextRobot == aux)
        list->last = aux;
    free (aux2);

    return;
}

void cycle (struct list *list){
    if (!list->first){
        printf("Não há mais robôs na fila para recarregar...\n");
        return;
    }

    int charges = 2;

    while (list->aux->robotID <= list->aux->nextRobot->robotID){
        if (list->aux->chargeToDo){
            list->aux->chargeToDo--;
            charges--;
        } 

        if (!list->aux->chargeToDo){
            removeRobot (list, list->aux->robotID);
        }

        if (!charges){
            printList (list);
            list->aux = list->aux->nextRobot;
            return;
        }

        if (!list->first)
            return;

        list->aux = list->aux->nextRobot;
    }

    if (list->aux->chargeToDo){
        list->aux->chargeToDo--;
        charges--;
    }

    if (!list->aux->chargeToDo)
        removeRobot (list, list->aux->robotID);

    printList (list);

    list->aux = list->aux->nextRobot;

    return;
}

int main () {
    struct list *list = malloc (sizeof(struct list));
    list->first = NULL;
    list->IdMax = 0;
    list->last = NULL;

    int n;
    printf("Digite a quantidade de robôs para cadastrar: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        struct robot *newRobot = createRobot (list);
        insertRobot (list, newRobot);
    }

    printList (list);

    int newCycle;
    do {
        printf("Para fazer outro ciclo, digite 1. Para cadastrar um novo robô digite 2. Para terminar o programa digite 0:");
        scanf("%d", &newCycle);

        if (newCycle == 2){
            struct robot *newRobot = createRobot (list);

            if (newRobot->chargeToDo)
                insertRobot (list, newRobot);

            printList (list);
        }

        if (newCycle == 1)
            cycle (list);
    } while (newCycle);
}
