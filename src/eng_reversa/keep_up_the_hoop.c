// KEEP UP THE HOOP
// Alex just got a new hula hoop, he loves it but feels discouraged because his little brother
// is better than him.
//
// Write a program where Alex can input (n) how many times the hoop goes round and it will return
// him an encouraging message:
//
// - If Alex gets 10 or more hoops, return the string:
// "Great, now move on to tricks"
//
// - If he doesn't get 10 hoops, return the string:
// "Keep at it until you get it"
//


#include <stdint.h>

const char *hoop_count(uint32_t n) {
    if(n >= 10){
      return "Great, now move on to tricks";
    }
    else{
      return "Keep at it until you get it";
    }
    return "";
}


//Coded by me
//
//Um simples problema de if else. Temos uma variável que vai receber um valor e temos que retornar uma mensagem
//em string de acordo com o valor inserido.
//
//O único erro que fiz foi utilizar o printf.
//
//Para esses problemas, o ideal é utilizar o return ao invés do printf. Uma vez que todos os problemas são mais detalhados
//e precisem de um valor em retorno ao invés de ler um texto no terminal.
//Deve ser justamente para pegar o próprio valor e computacionar.
//
//Mas de resto, foi bem simples.
//
//Precisei utilizar o if else com as condições matemáticas referentes ao problema e retornar a mensagem devida.
//Nesse caso, if(n >= 10) retornaria a mensagem de 10 ou mais hoops.
//E o else já fazia o serviço e retornaria a mensagem de menos de 10 hoops.
//
