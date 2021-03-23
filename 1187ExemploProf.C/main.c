#include <stdio.h>
#include <stdlib.h>
#define MATRIZ 12
int main() {
    int matriz[MATRIZ][MATRIZ];
    int i, j, n = 1, m = (MATRIZ - 2);
    int soma;
    int k;
    char str1[100];
    strcpy(str1,"");


    srand(time(NULL));   // Só deve ser chamada uma única vez

    //leitura da matriz
    for (i = 0; i < MATRIZ; i++){
        for (j = 0; j < MATRIZ; j++){
            matriz[i][j] = rand() % 10;
        }
    }

    for (i = 0; i < MATRIZ; i++){
        for (j = 0; j < MATRIZ; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //soma
    for (i = 0; i <= (MATRIZ/2)-1; i++){
        for (j = n; j <= m; j++){
            soma += matriz[i][j];
            printf("[%d][%d]:%d ",i,j,matriz[i][j]);
        }
        n++;
        m--;

        //trecho de codigo para criar o espacamento
        for (k=0; k<=n-2;k++){ //a cada linha impressa adiciona um conjunto 9 espacos x a linha que esta
            strcat(str1,"         ");
            //preenche com 9 espacos para criar o deslocamento necessario
        }
        printf("\n%s",str1);
        strcpy(str1,""); //esvazia o conteudo da string para a execucao da proxima linha
        //fim do trecho de espacamento
    }

    printf("\n");

    return 0;
}
