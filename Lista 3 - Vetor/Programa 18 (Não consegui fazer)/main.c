#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int i;
double p, z, soma=0, m, fat=1, x=0, n, y=2, s[15];
printf("Digite o valor de X em graus: ");
scanf("%lf", &n);
n=(n*3.14)/180;
for(i=0;i<15;i++)
{
for(x;x); {
if(x==1);
{
fat=1;
}
else
fat=fat*x;
}
z=x-1;
p=pow(n,z);
m=p/fat;
y=x+2;
if(i%2==0)

soma=soma+m;

else
{
soma=soma-m;
m=m*-1;
}
s[i]=m;
printf("\n%lf", s[i]);
}
printf("\nO valor do sen e igual a %lf", soma);
	return 0;
}
