#include <stdio.h>
#include <stdlib.h>

int main()
{
   int senha;
   while(senha != 2002 || 1){
    scanf("%d", &senha);
    if(senha != 2002){
        printf("Senha invalida\n");
    } else{
        break;
      }
    }
   printf("Acesso permitido");
   return 0;
}

