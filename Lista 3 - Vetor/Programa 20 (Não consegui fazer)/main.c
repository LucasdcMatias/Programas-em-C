#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

for C = 1 : 50
 VALOR = input('Digite um valor: ');
 VETVAL(C) = VALOR;
 if ( mod(VETVAL(C),2) == 0 ) % é par
 if ( ( VETVAL(C) < MAIORPAR ) | ( CPAR == 0) )
 MAIORPAR = VETVAL(C);
 end
 SOMAPAR = SOMAPAR + VETVAL(C);
 CPAR = CPAR + 1;
 else
 if ( ( VETVAL(C) > MENORIMP ) | ( CIMP == 0 ) )
 MENORIMP = VETVAL(C);
 end
 SOMAIMP = SOMAIMP + VETVAL(C);
 CIMP = CIMP + 1;
 end
end
if ( CPAR ~= 0 )
 fprintf(1,'Maior par: %d\n',MAIORPAR);
 MEDIAIMP = SOMAIMP / CIMP;
 fprintf(1,'A media dos valores pares digitados eh: %f\n',MEDIAPAR);
 disp('Valores PARES maiores que a media PAR');
 for C = 1 : 50
 if ( mod(VETVAL(C),2) == 0 ) & ( VETVAL(C) > MEDIAPAR )
 fprintf(1,'%d ',VETVAL(C));
 end
 end
 fprintf(1,'\n');
else
 disp('Não foi digitado valor par!');
end
if ( CIMP ~= 0 )
 fprintf(1,'Menor impar: %d\n',MENORIMP);
 MEDIAPAR = SOMAPAR / CPAR;
 fprintf(1,'A media dos valores impares digitados eh: %f\n',MEDIAIMP);
 disp('Valores IMPARES menores que a media IMPAR');
 for C = 1 : 50
 if ( mod(VETVAL(C),2) == 1 ) & ( VETVAL(C) < MEDIAIMP )
 fprintf(1,'%d ',VETVAL(C));
 end
 end
 fprintf(1,'\n');
else
 disp('Não foi digitado valor impar!');
end 
	return 0;
}
