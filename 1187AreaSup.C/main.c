#include <stdio.h>
#include <stdlib.h>
#define MATRIZ 11
int main(){
   int matriz[MATRIZ][MATRIZ];
   int i, j, n = 1, m = (MATRIZ-2);
   int soma;
   int k;
   char str1[100];
   strcpy(str1,"");

   srand(time(NULL));//gerador de números aleatórios

   for(i = 0; i < MATRIZ; i++){
    for(j = 0; j < MATRIZ; j++){
        matriz[i][j] = rand() % 10;
    }
   }
   for(i = 0; i < MATRIZ; i++){
    for(j = 0; j < MATRIZ; j++ ){
        printf("%d ",matriz[i][j]);
    }
    printf("\n");
   }
    printf("\n");

    //soma
    for(i = 0; i <= (MATRIZ/2)-1; i++){
        for(j = n; j <= m; j++){
             printf("[%d][%d]:%d ",j,i,matriz[i][j]);
        }
        n++;
        m--;

        //trecho de codigo para criar o espacamento
        for(k=0; k <= n-2; k++){ // a cada linha impressa adiciona um conjunto de 9 esoaços x a linha que esta
          strcat(str1,"         "); // preenche com 9 espaços para criar o deslocamento necessário.

        }
        printf("\n%s", str1);
        strcpy(str1,""); //esvazia o conteudo da string para a execucao da proxima linha

        }
        printf("\n");
    return 0;
   }
