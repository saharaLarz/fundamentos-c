


// THE FEAST OF MANY BEASTS

// All of the animals are having a feast! Each animal is bringing one dish. There is just one rule: the dish must start and end with the same letters as the animal's name. For example, the great blue heron is bringing garlic naan and the chickadee is bringing chocolate cake.

// Write a function feast that takes the animal's name and dish as arguments and returns true or false to indicate whether the beast is allowed to bring the dish to the feast.

// Assume that beast and dish are always lowercase strings, and that each has at least two letters. beast and dish may contain hyphens and spaces, but these will not appear at the beginning or end of the string. They will not contain numerals.



#include <stdbool.h>	// Permite você utilizar os valores true e false.
#include <stdlib.h>	// Fornece funções gerais de UTILIDADE. (NÃO UTILIZADO PARA ESSE CÓDIGO)
#include <string.h>	// Permite funções para manipular strings, nesse caso permite utilizar o strlen().

bool feast(const char* beast, const char* dish) {	// Declara a função feast como booleana. Recebe 2 parâmetros const char*.
							// const = a string NÃO pode ser modificada dentro da função.
							// char* = PONTEIRO para caractere.
							// beast/dish = nome do parâmetro.

    int lb = strlen(beast), ld = strlen(dish);				// Declara duas variáveis inteiras e calcula o comprimento de cada string.
    return (beast[0] == dish[0] && beast[lb -1] == dish[ld -1]);	// Retorna um valor (booleano) com o primeiro elemento de beast sendo igual ao primeiro elemento de dish.
									// E o último elemento de beast sendo igual ao último elemento de dish.
									// [ld -1] é por conta das arrays começarem em 0.


	// A função feast retorna o valor TRUE (uma vez que é uma função booleana) apenas quando as strings beast e dish começarem com
	// a mesma letra e terminarem com a mesma letra.
}
