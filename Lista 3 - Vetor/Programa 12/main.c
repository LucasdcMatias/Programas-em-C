#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int vete1[5], vete2[5], i;

for(i=1; i<=5; i++)
{
	printf("Digite 5 valores, %do valor: ", i);
	scanf("%d", &vete1[i]);
}

for(i=1; i<=5; i++)
{
	vete2[i] = vete1[i] * vete1[i];
}

printf("\nOs valores sao: ");
for(i=1; i<=5; i++)
printf("%d ", vete1[i]);

printf("\nO quadrado dos valores sao: ");
for(i=1; i<=5; i++)
printf("%d ", vete2[i]);
	return 0;
}
