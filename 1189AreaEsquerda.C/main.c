#include <stdio.h>

int main(){
    double MATRIZ[12][12];
    double soma = 0;
    int i, j, n=1, m=10;
    int k;
    char str1[100];
    strcpy(str1,"");

   srand(time(NULL));
   for (i = 0; i < 12; i++){
        for (j = 0; j < 12; j++){
            MATRIZ[i][j] = rand() % 10;
        }
    }
    for(i = 0; i < 5; i++){
        for(j = n; j <= m; j++){
            soma += MATRIZ[i][j];
            printf("[%d][%d]:%d ", i, j, MATRIZ[i][j]);
        }
            n++;
            m--;
    }
    for (k=0; k<=n-2;k++){
            strcat(str1,"         ");
    }
            printf("\n%s",str1);
            strcpy(str1,"");
return 0;
}
