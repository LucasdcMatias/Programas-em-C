#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int idade;
	
	printf("Escreva a idade: ");
	scanf("%d", &idade);
	
	if (idade < 18){
		printf("Menor de idade");
	}
	else if(idade >= 18 && idade <= 64){
		printf("Maior de idade");
	}
	else if(idade >=65){
		printf("Pessoa idosa");
	}
	return 0;
}
