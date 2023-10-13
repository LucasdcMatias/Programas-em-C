#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int idade;
	
	printf("Escreva a idade: ");
	scanf("%d", &idade);
	
	if (idade <= 15){
		printf("Não Eleitor");
	}
	else if(idade >= 18 && idade <= 65){
		printf("Eleitor Obrigatorio");
	}
	else if(idade >=66){
		printf("Eleitor Facultativo");
	}
		else if(idade == 16){
		printf("Eleitor Facultativo");
	}
		else if(idade == 17){
		printf("Eleitor Facultativo");
	}
	return 0;
}
