#include <stdio.h>
int main()
{
    int x, y, i;
    long long int acum = 0;
    scanf("%d %d", &x, &y);
    if (x < y){
          for(i = x; i <= y; i++){
                  if(i%13 !=0){
                    acum +=i;
                     }
              }
         }
         else {
            for(i = y; i <= x; i++){
                 if(i%13 != 0){
                    acum += i;
                       }
                    }
                }
    printf("%lld\n", acum);
    return 0;
}
