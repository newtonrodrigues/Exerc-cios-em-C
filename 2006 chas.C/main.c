#include <stdio.h>

int main(){

  int i, t, a, cont = 0;
  scanf("%d", &t);

  for( i = 0; i <= 4; i++){
    scanf("%d", &a);
    if (a == t){

        cont++;

    }
 }

      printf("%d\n", cont);
      return 0;
}
