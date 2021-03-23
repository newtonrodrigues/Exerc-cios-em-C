#include <stdio.h>
#include <stdlib.h>

int main()
{
   int kml = 12;
   double quaLitVia, disPer;
   int temGasVia, velMed;

   scanf ("%d %d", &temGasVia, &velMed);


   disPer = velMed * temGasVia;
   quaLitVia = disPer / kml;

   printf ("%.3lf\n", quaLitVia);

    return 0;
}
