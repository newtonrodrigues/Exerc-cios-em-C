#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, i, j, ini=1, fim=11;
   double soma = 0, m[12][12];
   char c[3];

   scanf("%d", &n);
   for(i = 0; i < 12; i++)
        for(j=0; j < 12; j++)
            scanf("%lf", &m[i][j]);

   for(i = 0; i <= 5; i++)
        for(j = ini; j <= fim; j++)
            soma += m[j][i];

            ini++;
            fim--;

   if(c[0]=='S')
    printf("%.1lf", soma);
    else
        printf("%.1lf\n", soma/66.0);


    return 0;
}
