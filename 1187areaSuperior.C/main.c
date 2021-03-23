#include <stdio.h>

int main(){
    double m[12][12];
    double soma = 0;
    int i, j;
    char op[5];

    scanf("%s", &op);

    for(i = 0; i < 12; i++)
        for(j = 0;j < 12; j++)
        scanf("%lf", &m[i][j]);

        for(i = 0; i <= 4; i++)
        for(j = i+1; j <= 10-1; j++)
            soma += m[i][j];

    if(op[0]=='S')
        printf("%.1lf\n", soma);
        else if(op[0]=='M')
           printf("%.1lf\n", soma/30.0);
   return 0;
}
