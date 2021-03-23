#include <stdio.h>
#include <stdlib.h>

int main()
{
   int X, i;
   scanf("%d", &X);
   for(i <= 1; i <= X; i++){
    if(i % 2 != 0){
        printf("%d\n\n", i);
    }
   }
    return 0;
}
