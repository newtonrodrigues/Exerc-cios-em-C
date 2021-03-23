#include <stdio.h>
#include <stdlib.h>

int main()
{
   int m[3][2], l, c;
   for(l = 0; 1 < 3; l++){
    for (c = 0; c < 2; c++){
        scanf("%d", &m[l][c]);
        }
   }
    for(l = 0; l < 3; l++){
        for(c = 0; c < 2; c++){
            printf("%d ", m[l][c]*2);
         }
         printf("\n");
    }
        return 0;
}
