#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  int distancia;
  float ttCombGasto;
  double conMedLit;

  scanf ("%d", &distancia);
  scanf ("%f", &ttCombGasto);

  conMedLit = distancia / ttCombGasto;

  printf("%.3lf km/l\n", conMedLit);

  return 0;
}
