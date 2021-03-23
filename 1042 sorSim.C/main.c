#include <stdio.h>

int main() {

   double salario, novSal, salPer;

   scanf("%lf", &salario);

   if(salario >= 0 && salario <= 400){

       novSal = salario * 1.15;
       salPer = salario * 0.15;

       printf("Novo salario: %.2lf\n\n", novSal);
       printf("Reajuste ganho: %.2lf\n\n", salPer);
       printf("Em percentual: 15 %%\n");

      } else if (salario > 400 && salario <= 800){

       novSal = salario * 1.12;
       salPer = salario * 0.12;

       printf("Novo salario: %.2lf\n\n", novSal);
       printf("Reajuste ganho: %.2lf\n\n", salPer);
       printf("Em percentual: 12 %%\n");

      } else if (salario > 800 && salario <= 1200){

       novSal = salario * 1.10;
       salPer = salario * 0.10;

       printf("Novo salario: %.2lf\n\n", novSal);
       printf("Reajuste ganho: %.2lf\n\n", salPer);
       printf("Em percentual: 10 %%\n");

      } else if (salario > 1200 && salario <= 2000){

       novSal = salario * 1.07;
       salPer = salario * 0.07;

       printf("Novo salario: %.2lf\n\n", novSal);
       printf("Reajuste ganho: %.2lf\n\n", salPer);
       printf("Em percentual: 7 %%\n");

      } else if (salario > 2000){

        novSal = salario * 1.04;
        salPer = salario * 0.04;

        printf("Novo salario: %.2lf\n\n", novSal);
        printf("Reajuste ganho: %.2lf\n\n", salPer );
        printf("Em percentual: 4 %%\n");

      }

    return 0;
}
