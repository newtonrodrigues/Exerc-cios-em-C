#include <stdio.h>
#include <stdlib.h>

int main()
{


   double a, b, soma, medFin;

   scanf("%lf", &a);

   for (int i = 0; i < a; i++){

    scanf("%lf", &b);

     soma += b;

   }

    medFin = soma / a ;

    printf("O valor da media e: %.2lf", medFin);


    return 0;
}
