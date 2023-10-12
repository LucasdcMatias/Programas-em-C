#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	float valor, desconto, novoValor;
	
	printf("Digite o valor do produto: \n");
	scanf("%f", &valor);
	
	desconto = valor * 0.09;
	novoValor = valor - desconto;
	
	printf("O valor do desconto eh: %f\n", desconto);
	printf("O valor do produto com desconto eh: %f\n", novoValor);
	return 0;
}
