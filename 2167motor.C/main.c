#include <stdio.h>

int main(){
   int n, aux = 0;
   scanf ("%d", &n);
   int vet[n], i;

   for(i = 0; i < n; i++){
    scanf("%d", &vet[i]);
   }
    for (i = 1; i < n; i++){
         if(vet[i] < vet[i-1]){
         aux = i+1;
         break;
        }
   }
   printf("%d\n", aux);
  return 0;
}
