#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vete1[15], vete2[15], i, resp;
	

for(i=1; i<=15; i++)
{
	printf("Digite 15 valores, %do valor: ", i);
	scanf("%d", &vete1[i]);	
}
for(i=1; i<=15; i++)
{
	if (vete1[i] > 0);
	else (vete1[i] = -1);
	vete2[i] = sqrt(vete1[i]);
}

//Valores
printf("\nOs valores sao: ");
for(i=1; i<=15; i++)
printf("%d ", vete1[i]);

//Raizes

for(i=1; i<=15; i++)
{
	if (vete2[i] > 0);
	else (vete2[i] = -1);
}

printf("\nAs raizes dos valores sao: ");
for(i=1; i<=15; i++)
printf("%d ", vete2[i]);

	return 0;
}
