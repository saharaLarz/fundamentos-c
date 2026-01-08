#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <unistd.h>

typedef struct{
	uint8_t id;
	float temp;
	uint32_t time;
	uint8_t checksum;	// checksum é uma contagem dos bytes dos dados para verificar que o arquivo ainda está nos conformes ou foi corrompido.
				// usamos uint8_t para definir o tamanho dele em 1byte (8bits), que o checksum vai somando valores entre 0 a 255 (2^8);
} Telemetria;

int main(){
	Telemetria p1;
	p1.id = 23;
	p1.temp = 23.3;
	p1.time = 0;

	while(1){
		printf("\033[H\033[J");
		
		p1.checksum = (uint8_t)(p1.id + (uint8_t)p1.temp + p1.time);    // os (uint8_t) são conversões de valores, a temperatura, que era em float, passa a ser um valor inteiro.
                                                                                // assim como toda essa soma será convertida a um valor inteiro de 1byte (8bits).
		p1.time++;
		p1.temp += 0.5;

		printf("ID: %u\n", p1.id);
		printf("Temperatura: %.2f\n", p1.temp);
		printf("Tempo: %u s\n", p1.time);
		printf("Checksum: %u (Hex: 0x%02X)\n", p1.checksum, p1.checksum);

		sleep(1);
	}

	return 0;
}
