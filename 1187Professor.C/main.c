#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MATRIZ 12
int main() {
    int matriz[MATRIZ][MATRIZ];
    int i, j, n = 1, m = (MATRIZ - 2);
    double soma;
    int k;
    char str1[100];
    strcpy(str1,"");
   char c[5], enter;

   scanf("%c", &c);
   while(c[0]!='S' && c[0]!='M'){
    printf("Errado! Digite novamente: ");
    scanf("%c", &enter);
    scanf("%c", &c);
    if(c[0]=='S' || c[0]=='M'){
    break;
    }
   }


    srand(time(NULL));   // S� deve ser chamada uma �nica vez

    //leitura da matriz
    for (i = 0; i < MATRIZ; i++){
        for (j = 0; j < MATRIZ; j++){
            matriz[i][j] = rand() % 10; //se quer exibir �rea superior ou inferior, melhor i, j. Se quer �rea esquerda ou direita, j, i.
        }
    }

    for (i = 0; i < MATRIZ; i++){ // exibi��o da matriz
       for (j = 0; j < MATRIZ; j++){ // exibi��o da matriz
          printf("%d ",matriz[i][j]);
      }
       printf("\n");
    }
    printf("\n");

    //soma
    for (i = 0; i <= (MATRIZ/2)-1; i++){ //matriz de 12 posi��es, portanto, como teremos 2 percorredores, n e m,
        for (j = n; j <= m; j++){ // cada um percorrer� exatamente a metade da matriz at� o encontro. Portanto,
          printf("[%d][%d]:%d ", i, j, matriz[i][j]);
             soma += matriz[i][j]; // 12 /2 = 6. Por�m, mesmo assim, sobra espa�o desnecess�rio, pois se fosse assim
               // cada um percorreria 7 casas. Ent�o (-1), a� temos 6 - 1 = 5. Cada posi��o
                  // percorrer� 6 posi��es.
            }


      n++;
        m--;

          //trecho de codigo para criar o espacamento
        for (k=0; k<=n-2;k++){ //a cada linha impressa adiciona um conjunto 9 espacos x a linha que esta
            strcat(str1,"    1    ");
            //preenche com 9 espacos para criar o deslocamento necessario
        }

         printf("\n%s",str1);
          strcpy(str1,"");

  //altera o resultado da impress�o do for de j, utilizando o espa�amento condicionado acima.
        //esvazia o conteudo da string para a execucao da proxima linha ok acho que entendi essa linha
//tem sentido ele executar ap�s o printf, caso contr�rio, esvaziaria antes da 1 exibi��o, prejudicando permanentemente a exibi��o correta do programa.
        //fim do trecho de espacamento


    }

        if(c[0]=='S') //
            printf("Valor da soma: %.1lf\n", soma);
        else if(c[0]=='M')
            printf("Valor da media: %.1lf\n", soma/30.0);


    printf("\n");

    return 0;
}
