/* O arquivo relay.c é o próprio drive do acionamento do relé */
/* O relay.h age como um contrato, agora o relay.c é o cumprimento desse contrato */

#include <relay.h>          // Inclusão do contrato relay.h

#define RELAY_ON_LOGIC 4    // Definição dos pinos lógicos
#define RELAY_OFF_LOGIC 5

void relay_init(void){

};

void relay_set_state(bool turn_on){

};

void relay_toggle(void){

};

