#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
char frase[80], par[40];
int x, z, contB, contA, contPar;

contB=0;
contA=0;
contPar=0;

printf("Digite uma frase de ate 80 caracteres: , termino com ponto final\n");
scanf("%c" &frase[i]);

for (int i = 0; i <40; i++)
  par[i] = ' ';

for(int x=0; x<80; x++)
{
    z=x+1;

    if (frase[x]==' ')
    contB+=1;

    if (frase[x]=='A' || frase[x]=='a')
     contA += 1;

    if (frase[x]==frase[z] )
    {
        par[contPar]=frase[x]+frase[z];
    
        contPar+=1;
    }

    if (frase[x]=='.')
        break;

}

printf("Existe(m) "%d" branco(s) na frase.\n", contB);
printf("Existe(m) "%d" letra(s) A na frase.\n", contA);
Printf("Existe(m) "%d" pares na frase.\n", contPar);
for (int i = 0; i <40; i++)
printf("Os pares são: "%c"\n", par[i]);



system("pause");
	return 0;
}
