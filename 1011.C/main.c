#include <stdio.h>
#include <stdlib.h>

int main() {

 double raio, VOLUME;

   scanf("%lf", &raio);

   VOLUME = (4/3.0) * 3.14159 * (raio * raio * raio);

   printf ("VOLUME = %.3lf\n", VOLUME);


    return 0;
}
