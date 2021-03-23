#include <stdio.h>
#include <stdlib.h>
#define MATRIZ 12
int main() {
    int matriz[MATRIZ][MATRIZ];
    int i, j, n = 1, m = (MATRIZ - 2);
    int k;
    char str1[100];
    strcpy(str1,"");

    srand(time(NULL));


    for (i = 0; i < MATRIZ; i++){
        for (j = 0; j < MATRIZ; j++){
            matriz[i][j] = rand() % 10;
        }
    }

    for (j = 0; j < 5; j++){
        for(i = n; i <= m; j++){
            printf("[%d][%d]:%d ", i, j, matriz[i][j]);
        }
         n++;
         m--;

        for (k=0; k<=n-2;k++){
            strcat(str1,"         ");
        }
        printf("\n%s",str1);
        strcpy(str1,"");
        }
    printf("\n");
    return 0;
}
