#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n;
	float an, a1, q;
	
		/*INSERE RAZÃO*/
	printf ("Digite a razao da PG: ");
	scanf ("%f", &q);
	
		/*INSERE A1*/
	printf ("\nDigite o primeiro termo da PG: ");
	scanf ("%f", &a1);
	
		/*INSERE Nº DE TERMOS*/
	printf ("\nDigite o numero de termos da PG: ");
	scanf ("%d", &n);
	
		//FORMULA
	an = a1*pow(q,n-1);
	
		//IPRIME RESULTADO
	printf("\n 0 %d termo da PG e: %f", n, an);
	return 0;
	
}
