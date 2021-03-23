#include <stdio.h>
#include <stdlib.h>

int main()
{
    int la, l, c;
    double m[12][12], soma = 0;
    char car, enter;
    scanf("%d", &la);
    scanf("%c", &enter);
    scanf("%c", &car);

    for(l = 0; l < 12; l++){
        for(c = 0; c < 12; c++){
                scanf("%lf", &m[l][c]);
            if(l==la){
                soma += m[l][c];
            }
        }
    }
    if(car == 'S'){
        printf("%.1lf\n", soma);
    }
    else{
        printf("%.1lf\n", soma/12.0);
    }
    return 0;
}
