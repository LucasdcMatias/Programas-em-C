#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, antecessor, sucessor;

  printf("Informe um numero inteiro: \n");
  scanf("%d", &n);

  antecessor = n - 1;
  sucessor = n + 1;
  
  printf("%d eh o antecessor\n", antecessor);
  printf("%d eh o sucessor\n", sucessor);
	return 0;
}
