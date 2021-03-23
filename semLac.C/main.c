#include <stdio.h>
#include <stdlib.h>

int main() {

   double a, cont, medSim;

   for(int i = 0; i <= 4; i++){

        scanf("%lf", &a);

        cont += a;

        }

     medSim =  cont / 2;
     printf("O valor da media e: %.2lf\n", medSim);

    return 0;


}
