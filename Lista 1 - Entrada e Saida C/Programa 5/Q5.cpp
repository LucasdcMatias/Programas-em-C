#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, k;
	float an, ak, r;
	
		/*INSERE RAZÃO*/
	printf ("Digite a razao da PG: ");
	scanf ("%f", &r);
	
		/*INSERE A1*/
	printf ("\nDigite a1 da PG: ");
	scanf ("%f", &ak);
	
		/*INSERE Nº*/
	printf ("\nDigite o termo da PA: ");
	scanf ("%d", &n);
	
		//FORMULA
	an = ak * r ^ (n-1);
	
		//IPRIME RESULTADO
	printf("\n 0 %d termo da PA eh %f", n, an);
	return 0;
	
}
