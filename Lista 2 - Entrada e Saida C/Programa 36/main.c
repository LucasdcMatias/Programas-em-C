#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a, b, c, delta, x1, x2;
	
	printf("Digite os valores de A, B e C: ");
	scanf("%f""%f""%f", &a, &b, &c);
	
	delta = b * b- 4 * a * c;
	
	x1 = (-b + sqrt(delta)) / (2*a);
	x2 = (-b - sqrt(delta)) / (2*a);
	
	printf("O valor de X1 eh: %f.2\n", x1);
	printf("O valor de X2 eh: %f.2", x2);
	
	return 0;
}
