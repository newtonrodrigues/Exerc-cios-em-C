#include <stdio.h>
#include <stdlib.h>

int main()
{
   int N, i;
   scanf("%d", &N);
   printf("\n");
   for(i = 1; i <= 10000; i++){
    if(i % N == 2){
        printf("%d\n", i);
    }
   }
   return 0;
}
