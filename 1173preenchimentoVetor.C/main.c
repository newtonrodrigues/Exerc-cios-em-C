#include <stdio.h>

int main() {
 int N, vet[10], i;
 scanf("%d", &N);

 for(i = 0; i < 10; i++){
    vet[i] = N;
    printf("N[%d] = %d\n", i, vet[i]);
    vet[i] = N = N * 2;// ou vet[i] = N *= 2;
 }
return 0;
}
