#include <stdio.h>
#include <stdlib.h>

int main()
{
    int l, c;
    scanf("%d %d", &l, &c);
    int mat[l][c];
    int j, k;

    for(j = 0; j < l; j++){
        for(k = 0; k < c; k++){
            scanf("%d", &mat[j] [k]);
        }
    }
    for(j = 0; j < l; j++){
        for (k = 0; k < c; k++){
        printf("%d ", mat[j] [k]*2);
        }
        printf("\n");
    }
    return 0;
}
