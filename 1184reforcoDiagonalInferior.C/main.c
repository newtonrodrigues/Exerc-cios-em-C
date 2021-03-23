#include <stdio.h>

int main()
{

    double a=0.0, m[12][12];
    char C[2];
    int x, y;
    scanf("%s", &C);

    for(x = 0; x <= 11; x++)
        for(y = 0; y <= 11; y++)
            scanf("%lf", &m[x][y]);

    for(x=1; x<=11; x++)
        for(y=0; y < x; y++)
        a+= m[x][y];

    if(C[0]=='S')
        printf("%.1lf\n", a);
    else if(C[0]=='M')
        a = a/66.0;
        printf("%.1lf\n", a);
    return 0;
}
