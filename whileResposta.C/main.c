#include <stdio.h>
#include <stdlib.h>

int main()
{
   int resposta;

   printf("Digita um valor entre 1 e 5: ");
   scanf("%d", &resposta);
   printf("\n");

   while(resposta < 1 || resposta > 5){
   // printf("Valor incorreto\n");
    //printf("Digite um valor entre 1 e 5: ");
    scanf("%d", &resposta);
   }
   printf("\nCorreto voce digitou: %d\n", resposta);

   return 0;

   }
