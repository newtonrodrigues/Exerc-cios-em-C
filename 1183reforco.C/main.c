#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    char c[3];
    double a = 0.0, m[12][12];

    scanf("%s", &c);
    for(x = 0; x < 12; x++)
        for(y=0; y<12; y++)
        scanf("%lf", &m[x][y]);

    for(x = 0; x <= 10;x++)
        for(y = x+1; y<=11; y++)
         a+=m[x][y];

        if(c[0]=='S')
           printf("%.1lf\n", a);
           else if(c[0]=='M')
            a = a/66.0;
            printf("%.1lf\n", a);
    return 0;
}
