#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 float deposito, taxa, rendimento, rendimentoFinal;
	 
	 printf("Digite o valor do deposito: ");
     scanf("%f", &deposito);
     
	 printf("\nDigite a taxas de juros: ");
     scanf("%f", &taxa);
     
	 rendimento=deposito*(taxa/100);
     
	 printf("\nO valor do rendimento eh: %.2f", rendimento);
     
	 rendimentoFinal=deposito+rendimento;
     
	 printf ("\nO valor do rendimento final eh: %.2f", rendimentoFinal);
     
	return 0;
}
