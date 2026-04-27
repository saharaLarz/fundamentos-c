#include <stdio.h>      // Standard Input Output
#include <stdlib.h>     // Standard Library
#include <stdbool.h>    // Standard Boolean

void variaveis(){

    /* VARIÁVEIS são blocos de dados reutilizáveis que são armazenados na memória.
    Cada variável possui um valor e um endereço. */

    // int - integers = números inteiros (4 bytes - 32 bits)
    // float = números com ponto decimais (4 bytes - 32 bits)
    // double = números float com precisão dupla (8 bytes - 64 bits)
    // char = caractere único (1 byte)
    // char[] = array de caracteres, ou strings (tamanho variável)
    // bool = verdadeiro ou falso (1 byte, requer <stdbool.h>)

    /* Aprendendo a utilização dos doubles e testando prints */

    double pi = 3.14159265358979;
    double e = 2.7182818284590;
    double time = 56.4876934567345934;

    printf("Valor de pi %.15lf\n", pi);     // Usando %.15lf    (lf = longfloat) (.15 = 15 números decimais)
    printf("Valor de e %.15lf\n", e);
    printf("Valor de time %.15lf\n", time);

    /* Aprendendo a utilização da declaração char e como incluir 
    strings longas */

    char grade = 'A';   // Utilizando single quotes '
    char moeda = '$';

    char name[] = "Pedro Lacerda";  // Utilizando double quotes "
    char food[] = "Burger";
    char email[] = "bigmac6969@gmail.com";

    printf("Nota da prova: %c\n", grade);   // Utilizando %c
    printf("Sua moeda é: %c\n", moeda);
    printf("Olá %s\n", name);               // Utilizando %s
    printf("Sua comida favorita é %s\n", food);
    printf("Seu email é: %s\n", email);

    bool isOnline = false;

    printf("Status: %d\n", isOnline);

    if(isOnline){
        printf("Você está ONLINE");
    }
    else{
        printf("Você está OFFLINE");
    }
}

void pointers(){
    
}

int main(){

    variaveis();
    return 0;
}
