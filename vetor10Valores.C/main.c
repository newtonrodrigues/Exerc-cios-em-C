#include <stdio.h>
#include <stdlib.h>

int main()
{
   int vet[10], i;

   for(i = 0; i < 10; i++){

    scanf("%d", &vet[i]);

    }
    for(i = 0; i < 10; i++){


      if(vet[i] <= 0){
        vet[i] = 1;

        }

        printf("X [%d] = %d\n", i, vet[i]);


    }
    return 0;
}
