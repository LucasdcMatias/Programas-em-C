#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float entrada, tercaParte;

	printf ("Digite um numero: \n");

   scanf ("%f", &entrada);

   tercaParte = entrada * 1/3;
   printf("A terca parte de %f eh: %f\n",  entrada, tercaParte);
	return 0;
}
