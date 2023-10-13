#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int mat[3][3] = {{1, 2, 3},
					 {4, 5, 6},
					 {7, 8, 9}};
	int i, j, fi, opcao, somaDP=0, somaDS=0, ehsimetrica;
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	
	do{
	printf("*****Escolha a opcao*****");
	printf("\nDigite 1 para Imprimir a diagonal principal\n");
	printf("Digite 2 para Imprimir a soma da diagonal principal\n");
	printf("Digite 3 para Imprimir a diagonal secundaria \n");
	printf("Digite 4 para Imprimir a soma da diagonal secundaria \n");
	printf("Digite 5 para Imprimir a matriz transposta \n");
	printf("Digite 6 para Verificar se a matriz eh ou nao simetrica \n");
	
	printf("\nDigite a opcao desejada: ");
	scanf("%d", &opcao);

	switch (opcao)
	
	{
		case 1:
			printf("Diagonal principal da matriz: ");
		for (i = 0; i < 3; i++){
   		printf("%d  ", mat [i] [i]);
		}
						break;
						
		case 2:
			printf("Soma da diagonal principal: ");
				for(i=0; i<3; i++)
					somaDP = mat[i][i]+mat[i][(3-4)];
					printf("%d", somaDP);
			
			
						break;
				
		case 3:
			printf("Diagonal secundaria: ");
			for (i = 3-1; i >= 0; i--){
   			printf("%d  ", mat [i] [(3-1)]-i);
   			}
						break;
		
		case 4:
			printf("Soma da diagonal secundaria: ");
				for(i=0; i<3; i++)
					{
						somaDS = somaDS + mat[i][2-i];
					}				
						printf("%d", somaDS);
				
				
						break;
						
		case 5:
			printf("Matriz transposta: ");
			for (i = 0; i < 3; i++){
			for (j = 0; j < 3; j++)
				{
    		printf("%d  ", mat [j] [i]);
				}
			}
						break;
						
		case 6:
			printf("Verificacao de matriz: \n");
			for (i=0; i<3; i++) {
    printf("%da. linha: ", (i+1));
    for (j=0; j<3; j++) {
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }

  if (ehsimetrica == 1)
     printf("\nA matriz informada \"eh\" uma matriz simetrica.\n");
  else printf("\nA matriz informada \"nao\" eh uma matriz simetrica.\n");
            
	}
			printf("\n\nDigite\n8. Para nova opcao\n9. Para sair\n");
			scanf("%i", &fi);
		} while (fi == 8);
	return 0;
}
