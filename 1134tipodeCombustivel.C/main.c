#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, alcool, gasolina, diesel;
   alcool = 0, gasolina = 0, diesel = 0;
   while(1){
    scanf("%d", &n);
    if(n==1)alcool++;
    if(n==2)gasolina++;
    if(n==3)diesel++;
    if(n==4)
        break;
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

   return 0;
}
