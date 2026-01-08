#include <stdio.h>	// Para printar no output
#include <stdint.h>	// Para tipos de tamanho fixo (uint8_t, uint16_t, uint32_t)

struct SensorIndustrial{
	uint16_t id;		// ID do sensor (2bytes)
	float temperatura;	// Valor da temperatura (4bytes)
	uint8_t status;		// 1 para ligado, 0 para erro (1 byte)
	uint8_t alerta;		// Aqui eu acertei
};

int main(){
	struct SensorIndustrial s1 = {101, 35.5, 0};

	s1.alerta = (s1.temperatura > 30.0) ? 1 : 0;	// Aqui que eu falhei, não sabia onde colocar a condição do alerta para ele receber 1 ou 0
	//s1.alerta = (s1.temperatura > 30.0);		// Essa linha de código é mais simplificada que a de cima, retorna o mesmo resultado

	printf("ID: %u\n", s1.id);
	printf("Temperatura: %.2f C\n", s1.temperatura);
	printf("Status: %s\n", s1.status ? "Operacional" : "Erro");
	printf("Alerta: %s\n", s1.alerta ? "Ligado" : "Desligado");	// Aqui eu acertei

	printf("Tamanho na memoria: %zu bytes\n", sizeof(s1));

	return 0;
}
