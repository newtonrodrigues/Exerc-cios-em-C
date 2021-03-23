#include <stdio.h>
#include <stdlib.h>

int main(){

   int i, x, y, acum = 0;
   scanf("%d %d", &x, &y);

 if(x < y){

 for (i = x+1; i < y; i++){

    if(i % 2 != 0){

        acum += i;

        }
      }
    }

   else {

        for(i = x-1; i > y; i--){
            if (i & 2 != 0){
                acum += i;

            }

        }

    }

        printf("%d\n", acum);
   return 0;

}
