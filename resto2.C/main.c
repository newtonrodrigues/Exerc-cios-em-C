#include <stdio.h>
int main(){
   int m[2][3];
   int l, c;
   for (l = 0; l < 2; l++){
    for(c = 0; c < 3; c++){
        scanf("%d", &m[l][c]);
    }
   }
   printf("\n");
   for(l = 0; l < 2; l++){
        for(c = 0; c < 3; c++){
                printf("%d ", m[l][c]*2);
        }
        printf("\n");
    }
   return 0;
}
