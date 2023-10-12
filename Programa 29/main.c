#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int horas, minutos;
	
	printf("Digite a hora: ");   
	scanf("%d",&horas);
	
	minutos = horas * 60;
	
	printf("\nO valor total em minutos e %d", minutos);
	
	return 0;
}
