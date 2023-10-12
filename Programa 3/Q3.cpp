#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n, k;
	float an, ak, r;
	
		/*INSERE RAZÃO*/
	printf ("Digite a razao da PA: ");
	scanf ("%f", &r);
	
		/*INSERE A1*/
	printf ("\nDigite a1 da PA: ");
	scanf ("%f", &ak);
	
			/*INSERE Nº*/
	printf ("\nDigite o termo da PA: ");
	scanf ("%d", &n);
	
			/*INSERE K*/
	printf ("\nDigite o K da PA: ");
	scanf ("%d", &k);
	
	//FORMULA
	an = ak + (n-k)*r;
	
	//IPRIME RESULTADO
	printf("\n 0 %d termo da PA eh %f", n, an);
	return 0;
	
}
