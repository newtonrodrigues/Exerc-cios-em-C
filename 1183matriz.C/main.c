#include <stdio.h>
int main(){
   double a=0.0, M[12][12];
   char op[5];
   int i, j;

   scanf("%s", &op);
   for(i=0; i<12; i++)
     for(j=0; j<12; j++)
       scanf("%lf", &M[i][j]);

    for(i=0; i < 12; i++)
        for(j= i+1; j< 12; j++)
           a += M[i][j];

     if(op[0]=='S')
            printf("%.1lf\n", a);
            else if(op[0] =='M')
                a = a/66.0;
                printf("%.1lf\n", a);
            return 0;
     }
