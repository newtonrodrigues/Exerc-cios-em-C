#include <stdio.h>
int main(){

    int n, i, j;
    double m[12][12], soma = 0;

    char car, enter;
    scanf("%d", &n);
    scanf("%c", &enter);
    scanf("%c", &car);

    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf", &m[i][j]);
            if(i ==n){ //linha l, coluna c, exercicios 1181 e 1182 somente mudam isso
                soma += m[i][j];
            }
        }
    }
    if(car == 'S'){
        printf("%.1lf\n", soma);
    }
    else {
        printf("%.1lf\n", soma/12.0);
    }
    return 0;
}
