#include <stdio.h>
#include <stdlib.h>

int main()
{
  double A, B, C, MEDIA;


   scanf("%lf", &A);
   scanf ("%lf", &B);
   scanf ("%lf", &C);

     if ((A >= 0) || (A <= 10)) {
       A = A;
     } else if ((B >= 0) || (B <= 10)) {
       B = B;
     } else if ((C >= 0) || (C <= 10)) {
       C = C;
     }

    MEDIA = ((A*2) + (B*3) + (C*5))/10;
    printf ("MEDIA = %.1lf\n", MEDIA);
    return 0;

    }










