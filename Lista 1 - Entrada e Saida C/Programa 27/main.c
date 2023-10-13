#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	 int numerador, denominador;
	 float decimal;
	 
	 printf("Digite o numerador: ");
	 scanf("%d",&numerador);
	 
	 printf("\nDigite o denominador: ");
	 scanf("%d",&denominador);
	 
	 decimal=(float)numerador/denominador;
	 
	 printf ("\nO numero racional eh %.2f ", decimal);
	return 0;
}
