#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int fi, i=0;
float tvendas, sfinal, sfixo, soma=0;
	
do{
	printf("Digite o salario fixo: \n");
	scanf("%f", &sfixo);
	printf("Digite o total de vendas no mes: \n");
	scanf("%f", &tvendas);
	

	if (tvendas >= 1000 && tvendas <= 5000){
		sfinal = 500 + sfixo;
		printf("Salario final: %.2f\n", sfinal);
		printf("Valor da comissao: 500,00\n");
		soma = soma + sfinal - sfixo;
	
	}
	else if(tvendas > 5000 && tvendas <= 7500){
		sfinal = 700 + sfixo;
		printf("Salario final: %.2f\n", sfinal);
		printf("Valor da comissao: 700,00\n");
		soma = soma + sfinal - sfixo;
	
	}
	else if(tvendas > 7500 && tvendas <= 10000){
		sfinal = 1000 + sfixo;
		printf("Salario final: %.2f\n", sfinal);
		printf("Valor da comissao: 1000,00\n");
		soma = soma + sfinal - sfixo;
	
	}
	else if(tvendas > 10000){
		sfinal = 1500 + sfixo;
		printf("Salario final: %.2f\n", sfinal);
		printf("Valor da comissao: 1500,00\n");
		soma = soma + sfinal - sfixo;
	}

	
	printf("\n\n1-Novo Calculo\n2-Sair do programa\n");
	scanf("%i", &fi);
	i++;
	}
	while(fi == 1);
	
	printf("A soma das comissoes eh igual a: R$%0.1f", soma);
	
	return 0;
}
