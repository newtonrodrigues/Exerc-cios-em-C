#include <stdio.h>
#include <stdlib.h>

int main()
{
 int i, j, cont = 0;
 char c[2];
 double matriz[12][12], soma = 0;

 scanf("%c", &c);

 for(i = 0; i < 12; i++){
    for(j = 0; j < 12; j++){
        scanf("%lf", &matriz[i][j]);
        if(i > j && i+j < 11){                //i < 12 - j - 1)
          soma += matriz[i][j];
          cont++;
        }
    }

 }
 if(c[0]=='S')
    printf("%.1lf\n", soma);
 else
    printf("%.1lf\n", soma/cont);

  return 0;
}
