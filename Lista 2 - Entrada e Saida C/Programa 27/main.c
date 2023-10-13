#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float n1, n2, media;
	
	printf("Informe a primeira nota: \n");
	scanf("%f", &n1);
	
	printf("Informe a segunda nota: \n");
	scanf("%f", &n2);
	
	
	media = (n1 + n2) / 2;
	
	if (media < 3)
	printf("Reprovado");
	
	else if(media >= 7)
	printf("Aprovado");
	
	else
	printf("Exame");
	return 0;
}
