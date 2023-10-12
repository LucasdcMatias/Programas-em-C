#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
  float valor1, valor2, media;
  
  printf("Digite o primeiro valor: \n");
  scanf("%f",&valor1);
  
  printf("Digite segundo valor: \n");
  scanf("%f",&valor2);
  
  
  media = (valor1 + valor2) / 2;
  
  
  printf("Media %.2f\n",media);
	return 0;
}
