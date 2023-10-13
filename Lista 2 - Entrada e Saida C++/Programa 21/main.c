#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float massa, altura, imc;
	
	printf("Digite o seu peso e sua altura: ");
	scanf("%f %f", &massa, &altura);
	
	imc = massa / (altura * altura);
	
	if(imc < 20)
		printf("IMC: %f\ Abaixo do peso\n", imc);
	else if(imc >=20 && imc < 25)
		printf("IMC: %f\ Peso normal\n", imc);
	else if(imc >=25 && imc < 30)
		printf("IMC: %f\ Sobre peso\n", imc);
	else if(imc >=30 && imc < 40)
		printf("IMC: %f\ Obeso\n", imc);
	else if(imc >= 40)
		printf("IMC: %f\ Obeso morbido\n", imc);
	
	return 0;
}
