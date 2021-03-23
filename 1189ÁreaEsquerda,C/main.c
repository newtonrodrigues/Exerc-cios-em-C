#include <stdio.h>
int main()
{
    double matriz[12][12], sum=0;
    int i, j, n=1, m=10;
    int k;
  //  char str1[100];
  //  strcpy(str1,"");
    srand(time(NULL));

        for(i = 0; i < 12; i++)
            for(j = 0; j < 12; j++)
                  matriz[i][j] = rand() % 10;

        for(i = 0; i < 5; i++){ //entender que quem estipula as palavras linha e coluna e alocamos na memória da nossa cabeça, somos nós mesmos.
            for(j = n; j <= m; j++){//a máquina não tem essas interligações, apenas cálculos matemáticos. Então tem que tentar pensar assim tb.
                sum += matriz[j][i];// i de linha passa para dentro, executando apenas 5 vezes, de 0 a 4. j, com seus 2 markpoints, percorre, 5 vezes, de 1 a 10
                printf("[%d][%d]:%.0lf ", j, i, matriz[i][j]); // sucessivamente j 2 - 9, 3 - 8, 4 - 7 , 5 - 6.
            }
                n++;
                m--;
                printf("\n");
          //  for(k=0; k<=n-2; k++){
            //    strcat(str1,"");
            //}
              //  printf("\n%s", str1);
                //strcpy(str1,"");
        }
   return 0;
}
