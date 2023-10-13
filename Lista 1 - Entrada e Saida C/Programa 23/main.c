#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int c;
	float f;
	
	printf("Digite a temperatura em celsius: ");
	scanf("%d", &c);

f = (9 * c + 160) / 5;
	printf("\nA temperatura em Fahrenheit e: %f", f);

	return 0;
}
