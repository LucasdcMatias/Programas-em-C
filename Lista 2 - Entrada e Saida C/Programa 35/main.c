#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x, Fx;
	
	printf("Digite um valor para X: ");
	scanf("%f", &x);
	
	Fx = (5 * x + 3) / sqrt(x*x - 16);
	
	printf("\nFx = %f", Fx);
	return 0;
}
