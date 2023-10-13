#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("Calculando numero PI usando serie de Leibniz\n");

   double pi = 4;
   double operador = -1;

   double i;
   for(i = 0; i < 900000000; i++){
      pi += operador*(4/(3+2*i));

      operador *= -1;
   }

   printf("Resultado: %.8f...\n", pi);
	return 0;
}
