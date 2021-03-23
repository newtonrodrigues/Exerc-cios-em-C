#include <stdio.h>

int main(){
    int senha;
    while(1) {
        scanf("%d", &senha);
        if(senha == 2002){
            break;
        }
        else{
            printf("senha invalida\n");
        }
    }
    printf("acesso permitido\n");
    return 0;
}
