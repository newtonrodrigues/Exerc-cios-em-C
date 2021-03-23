#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, b, c, i, raio;
   scanf("%d", &c);

    for(i = 0; i < c; i++){
        scanf("%d %d", &a, &b);
            raio = a + b;
                printf("%d\n", raio);
    }
return 0;
}
