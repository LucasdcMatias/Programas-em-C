#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if(num % 10 == 0 || num % 5 == 0 || num % 2 == 0)
		printf("Divisvel por 10, 5 ou 2\n");
	else
		printf("Nao e divisivel por 10, 5 ou 2\n");
	return 0;
}
