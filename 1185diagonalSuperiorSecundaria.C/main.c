#include <stdio.h>
#include <stdlib.h>

int main()
{
   char c[3];
   double a=0, m[12][12];
   int i, j;

   scanf("%s", &c);
   for(i=0; i<=11; i++)
    for(j=0; j<=11; j++)
    scanf("%lf", &m[i][j]);

    for(i=1; i<=11; i++)
        for(j=11; j>11-i; j--)
     a+=m[i][j];

   if(c[0]=='S')
    printf("%.1lf\n", a);
    else if(c[0]=='M')
        a = a/66.0;
        printf("%.1lf\n", a);

    return 0;
}
