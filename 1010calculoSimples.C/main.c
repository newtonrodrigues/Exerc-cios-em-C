#include<stdio.h>

int main() {
int cod1, cod2, nupeca1, nupeca2;
  double valorpeca1, valorpeca2, valorpago, valor1, valor2;

  scanf("%d %d %lf", &cod1, &nupeca1, &valorpeca1);
  scanf("%d %d %lf", &cod2, &nupeca2, &valorpeca2);

   valor1 = nupeca1 * valorpeca1;
   valor2 = nupeca2 * valorpeca2;
   valorpago = valor1 + valor2;



   printf("VALOR A PAGAR: R$ %.2lf\n", valorpago);

    return 0;
}
