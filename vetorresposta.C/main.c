#include<stdio.h>
int main(){

    char vet[4];
    int i;
    for(i = 0; i < 4; i++){
        scanf("%c", &vet[i]);
    }

    for(i = 4-1; i >= 0; i--){
        printf("%c", vet[i]);

    }
    printf("\n\n");
    for(i = 0; i < 4; i++){
        printf("%c", vet[i]);
    }
return 0;
}
