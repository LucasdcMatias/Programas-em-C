#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vetor[100], i;
	
	printf("\nValores armazenados no vetor: ");

	
	for (i=1; i<=101; i++){
		vetor[i]=(2*i+1);
		printf("%d. ", vetor[i]);
	}
	return 0;
}
