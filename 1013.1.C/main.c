#include <stdio.h>
#include <stdlib.h>

int main()
{

   int A, B, C, D, E, MaiorAB;



   scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);

   MaiorAB = ( A + B + abs( A - B ) ) /2;
   MaiorAB = ( C + MaiorAB + abs( C - MaiorAB ) ) /2;
   MaiorAB = ( D + MaiorAB + abs( D - MaiorAB ) ) /2;
   MaiorAB = ( E + MaiorAB + abs ( E - MaiorAB ) ) / 2;

   printf("%d eh o maior\n", MaiorAB);



    return 0;
}
