#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int idade;
	
	printf("Escreva a idade: ");
	scanf("%d", &idade);
	
	if(idade < 5){
		printf("Nao existe categoria para essa idade");
	}
	else if(idade <= 7){
		printf("Infantil A");
	}
	else if(idade >= 8 && idade <= 10){
		printf("Infantil B");
	}
	else if(idade >= 11 && idade <= 13){
		printf("Juvenil A");
	}
	else if(idade >= 14 && idade <= 17){
		printf("Juvenil B");
	}
	else if(idade >= 18){
		printf("Senior");
	}
	return 0;
}
