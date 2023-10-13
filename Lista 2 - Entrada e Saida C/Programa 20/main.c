#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, a2, b2, raizA, raizB;
	
	printf("Digite dois numeros inteiros: \n");
	scanf("%d""%d", &a, &b);
	a2 = a*a;
	b2 = b*b;
	raizA = sqrt(a);
	raizB = sqrt(b);
	if (a>b);
		printf("\nQuadrado do menor %d \n",b2);
		printf("Raiz quadrada do maior %d\n\n", raizA);
	if (a<b);
		printf("Quadrado do menor %d \n",a2);
		printf("Raiz quadrada do maior %d\n", raizB);
	return 0;
}
