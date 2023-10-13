#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define L 10
#define C 10

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int i, j, m[L][C], cSoma=0;

printf("Preencha os dados da Matriz %dX%d\n", L, C);
	for(i=0; i < L; i++){
		for (j=0; j < C; j++){
			printf("\nDigite os valores para M[%d][%d]\n", i, j);
			scanf("%d", &m[i][j]);
		}
	}
	
	for(i=0; i < L; i++){
		for (j=0; j < C; j++){
			
			if (j>i) {
				cSoma = cSoma + m[i][j];
			}
			
		}
	}
	
	printf("\n\n  Matriz \n\n");
	for(i=0; i < L; i++){
		printf("  %i\t[ ", i);
		for (j=0; j < C; j++){
			printf("%i ", m[i][j]);
		}
		printf("]\n");
	}

	printf("\n\n-------------------------\n");

	printf("\t Soma dos elementos acima da diagonal principal: %i\n", cSoma);

	return 0;
}
