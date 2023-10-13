#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int fi, opcao, areaq, perimetroq, bquadrado, areac, perimetroc, r, h, la, lc, areat, baset, perimetrot;

do{
	printf("*****Calculo da area e do perimetro*****");
	printf("\nDigite 1 para Quadrado\n");
	printf("Digite 2 para Circulo\n");
	printf("Digite 3 para Triangulo\n");
	
	printf("\nDigite a opcao desejada: ");
	scanf("%d", &opcao);

	switch (opcao)
	
	{
		case 1:
			printf("Para clacular a area e o perimetro, informe a base: ");
			scanf("%d", &bquadrado);
			areaq = bquadrado * bquadrado;
			perimetroq = 4*bquadrado;
			printf("A area do quadrado eh: %d e o seu perimetro eh: %d", areaq, perimetroq);
						break;
						
		case 2:
			printf("Para clacular a area e o perimetro, o raio: ");
			scanf("%d", &r);
			areac = 3.14 * r * r;
			perimetroc = 2 * 3.14 * r;
			printf("A area do circulo eh: %d e o seu perimetro eh: %d", areac, perimetroc);
						break;
						
		case 3:
			printf("Para clacular a area e o perimetro, informe a altura, a base e os dois lados: ");
			scanf("%d""%d""%d""%d", &h, &baset, &la, &lc);
			areat = (baset * h) / 2;
			perimetrot = la + lc + baset;
			printf("A area do quadrado eh: %d e o seu perimetro eh: %d", areat, perimetrot);
						break;
			
	}
			printf("\n\nDigite\n9. para sair\n8. para continuar\n");
			scanf("%i", &fi);
		} while (fi == 8);
	return 0;
}
