#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//Declarar as Variaveis de entrada
	float tempo, velocidade, distancia;
	
	//Constante
	float consumo = 12;
	
	//variaveis de saida
	float litros;
	
	printf("Digite o tempo da viagem: \n");
	scanf("%f", &tempo);
	printf("Digite a velocidade media (km/h): \n");
	scanf("%f", &velocidade);
	
	//calculo da distancia
	distancia = tempo * velocidade;
	
	//calculo dos litros
	litros = distancia / consumo;
	
	//Saida
	printf("Quantidade de litros: %.2f", litros);
	return 0;
}
