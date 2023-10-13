#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

float vetor[10], soma=0, media;
int i;

for(i=0; i<10; i++)
{
printf("Digite a altura de 10 atletas\nAltura do Atleta: ");
scanf("%f", &vetor[i]);
soma = soma + vetor[i];
}

media = soma / 10;
printf("Valor da media das alturas: %.2f",media);
for(i=0; i<10; i++)

{
if(vetor[i] > media)

{
printf("\nAltura maior do que a media: %.2f", vetor[i] );
}

}
	return 0;
}
