#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    char c[5], enter;
    printf("Digite a letra correta: ");
    scanf("%c", &c);

    while(c[0]!='D' && c[0]!='S'){
        printf("Errado. Digite novamente: ");
        scanf("%c", &enter);
        scanf("%c", &c);
            if(c[0]=='D'||c[0] =='S'){
                break;
            }
        }

    printf("Hello world!");
    return 0;
}
