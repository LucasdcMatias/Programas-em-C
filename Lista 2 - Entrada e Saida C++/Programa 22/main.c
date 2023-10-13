#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float saldomedio, credito;
	
	printf("Digite o saldo medio: \n");
	scanf("%f", &saldomedio);
	
	if (saldomedio <= 500){
		credito = 0;
	}
	else if(saldomedio >= 501 && saldomedio <= 1000){
		credito = 0.3 * saldomedio;
		printf("Saldo Medio: %.2f\n", saldomedio);
		printf("Valor do Credito: %.2f\n", credito);
	}
	else if(saldomedio >= 1001 && saldomedio <= 3000){
		credito = 0.4 * saldomedio;
		printf("Saldo Medio: %.2f\n", saldomedio);
		printf("Valor do Credito: %.2f\n", credito);
	}
	else if(saldomedio >= 3001){
		credito = 0.5 * saldomedio;
		printf("Saldo Medio: %.2f\n", saldomedio);
		printf("Valor do Credito: %.2f\n", credito);
	}
	return 0;
}
