#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int idade;
	
	printf("Digite a idade: \n");
	scanf("%d", &idade);
	
	if (idade <= 10)
	printf("Mensalidade R$ 30,00 \n");

else if (idade <= 29)
	printf("Mesalidade R$ 60,00");

else if (idade <= 45)
	printf("Mesalidade R$ 120,00");
	
else if(idade <= 59)
	printf("Mesalidade R$ 150,00");
	
else if(idade <= 65)
	printf("Mesalidade R$ 250,00");
	
else if(idade >65)
	printf("Mesalidade R$ 400,00");
	
	return 0;
}
