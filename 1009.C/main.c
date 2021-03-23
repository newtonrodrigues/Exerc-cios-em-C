#include <stdio.h>
#include <string.h>

int main() {

  char nome [50];
  double salFixo, totalVendasMes, vendasBonus, TOTAL;

  scanf("%s", &nome);
  scanf("%lf", &salFixo);
  scanf("%lf", &totalVendasMes);

  vendasBonus = totalVendasMes * 0.15;
  TOTAL = vendasBonus + salFixo;

  printf ("TOTAL = R$ %.2lf", TOTAL);


    return 0;
}
