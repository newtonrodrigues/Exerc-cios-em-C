#include <stdio.h>

int main()
{
    int vet[20], i;
    for(i = 0; i < 20; i++){
        scanf("%d", &vet[i]);
        }
        for(i = 19; i >= 0; i--){
        printf("N[%d] = %d\n", 19-i, vet[i]);


    }

    return 0;
}
