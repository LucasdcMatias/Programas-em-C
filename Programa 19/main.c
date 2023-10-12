#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a1, q, n, p;
	
	printf("Digite o primeiro termo da PG: \n");
	scanf("%d", &a1);
	
	printf("Digite a razao da PG: \n");
	scanf("%d", &q);
	
	printf("Digite o n-essimo termo da PG: \n");
	scanf("%d", &n);
	
	p = pow(a1,n) * pow(q, n * (n-1) / 2);
	
	printf("O produtor dos n primeiros termos da PG eh: %d", p);
	return 0;
}
