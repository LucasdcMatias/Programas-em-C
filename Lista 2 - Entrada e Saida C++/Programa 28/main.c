#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float compra, venda;
	
	printf("Digite o valor da compra: \n");
	scanf("%f", &compra);
	
	if(compra < 10)
	venda = compra + compra * 0.7;
	
	else if(compra < 30)
	venda = compra + compra * 0.5;
	
	else if(compra < 50)
	venda = compra + compra * 0.4;
	
	else
	venda = compra + compra * 0.3;
	
	printf("O valor de venda e: %.2f\n", venda);
	
	return 0;
}
