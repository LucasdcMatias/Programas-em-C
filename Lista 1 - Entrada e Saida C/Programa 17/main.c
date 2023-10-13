#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,c,b;
	
	printf("Digite o termo antecessor: \n");
	scanf("%d", &a);
	
	printf("Digite o termo sucessor: \n");
	scanf("%d", &c);
	
	b = (a + c) / 2;
	
	printf("O termo medio eh: %d", b);
	return 0;
}
