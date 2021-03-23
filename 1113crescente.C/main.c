#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    while(scanf("%d %d", &x, &y) && x != y ){
        if (x < y){
            printf("Crescente\n");

              }
              else{
                printf("Decrescente\n");
                }
            }
        return 0;
}
