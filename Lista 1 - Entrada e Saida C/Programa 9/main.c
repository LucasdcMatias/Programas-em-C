#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int M, N;
	
	printf("Digite os quatro digitos da placa: ");
	scanf("%i", &N);
	
	M = N/1000;
	
	
	printf ("\nO digito da casa da milhar eh %i", M);
	return 0;
}
