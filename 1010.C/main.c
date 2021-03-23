#include <stdio.h>
#include <stdlib.h>

int main() {

  int codP1, codP2, nuPecas1, nuPecas2;
  double valUnitCdPeca1, valUnitCdPeca2, total;

  scanf("%d", &codP1);
  scanf("%d", &nuPecas1);
  scanf("%lf", &valUnitCdPeca1);
  scanf("%d", &codP2);
  scanf("%d", &nuPecas2);
  scanf("%lf", &valUnitCdPeca2);

  total = (nuPecas1 * valUnitCdPeca1) + (nuPecas2 * valUnitCdPeca2);
  printf ("VALOR A PAGAR: R$ %.2lf\n", total);

  return 0;
}
