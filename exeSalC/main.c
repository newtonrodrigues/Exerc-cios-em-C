#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salFixo, salFinal, salDescontos ;
    float qtdeHorasExtras, salHorasExtras;

    printf ("Digite o valor do salario fixo: ");
    scanf ("%f", &salFixo);

    printf ("Digite a quantidade de horas extras: ");
    scanf ("%f", &qtdeHorasExtras);

    salHorasExtras = qtdeHorasExtras * 50;


    if ((salFixo == 3000) || (salFixo > 3000)){

        salDescontos = salFixo * 0.02;

       } else if (salFixo < 3000) {
        salDescontos = 0;
    }

    salFinal = salFixo + salHorasExtras - salDescontos;

    printf ("O desconto sera de %.2f\n", salDescontos);
    printf("O salario final sera: %.2f\n", salFinal);

}
