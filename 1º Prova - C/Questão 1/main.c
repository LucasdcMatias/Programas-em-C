#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int mesas, valor, gorjeta, soma = 0, g = 0, i = 0;
	
	printf("Digite a quantidade de mesas: ");
	scanf("%i", &mesas);
	
	printf("Digite o valor gasto por cada mesa: \n");
	
	do{
		scanf("%i", &valor);
		soma = soma + valor;
		gorjeta = valor * 0.1;
		g = g + gorjeta;
		
		printf("O valor da gorjeta eh igual a R$%i \n", gorjeta);
		i++;
	}
	while (i < mesas);
	
	printf("\nA soma das %i mesas eh igual a: R$%i \n", mesas, soma);
	printf("O valor total com gorjeta eh igual a: R$%i ", g);

	return 0;
}
