
/* Protege o arquivo contra leitura dupla */
/* Se utiliza RELAY_H e não RELAY.H, pois o . é um operador para structs */

#ifndef RELAY_H // Se Relay_h não está definido...
#define RELAY_H // ...Definir agora o Relay_h.

/* Bibliotecas bases */
#include <stdbool.h> // Biblioteca de booleanos (para usar "true" ou "false", precisa dessa lib.)
#include "sl_gpio.h" // Biblioteca oficial do Silicon Labs para o MGM

/* Mapeamento físico do Hardware */
/* Essa parte é fundamental para manutenção, uma vez que para alterar os pinos só será necessário
   mudar esse bloco de códigos */
#define RELAY_PORT  SL_GPIO_PORT_A  // Definição da porta do relay (Porta A)
#define REPLAY_PIN  4               // Definição do pino do relay (Pino 4)

/* Informa quais ferramentas existem para controlar o relé */
/* Como elas se chamam, o que exigem de entrada e o que devolvem */

void relay_init(void); // o primeiro void significa: não devolve nada.
                       // o void entre parênteses significa: não aceita nenhum parâmetro de entrada.
void relat_set_state(bool turn_on); // Recebe um booleano true (ligar) ou false (desl) e não retorna nada.
void relay_toggle(void); // Inverte o estado atual (se ligado, desliga. se desligado, liga.)

#endif /* Se o Relay_h já for incluído,, ele pula todo o processo do header.*/

/* Resumindo, este arquivo é apenas um code de instruções para o arquivos seguintes e pode ser incluído
nelas. */