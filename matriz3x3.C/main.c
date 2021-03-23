#include <stdio.h>

int main(){
    double matriz[12][12], soma = 0, cont = 0;
    int i, j, n = 1, m = 10;
    srand(time(NULL));

     for (i = 0; i < 11; i++){
        for (j = 0; j < 11; j++){
            matriz[i][j] = rand() % 10;
        }
    }
    for(i = 0; i <= 11; i++){
            cont++;
        for(j = 0; j <= 11; j++){
           if(i > j && i + j <= 10){
                soma += matriz[j][i];
                n++;
                m--;
                    printf("%.0lf\n", soma);
           }
        }
    }
return 0;
}
