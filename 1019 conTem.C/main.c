#include <stdio.h>
#include <stdlib.h>

int main()
{


  int N, a, b, c, d;

   scanf("%d", &N);

   a = N / 3600;
   b = N % 3600;
   c = b / 60;
   d = b % 60;



   printf ("%d:%d:%d\n", a, c, d);


    return 0;
}
