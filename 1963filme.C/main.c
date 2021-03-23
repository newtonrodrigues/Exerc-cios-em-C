#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, res; // b == vn // a == va//
    scanf("%lf %lf", &a, &b);
        res = ((b * 100)/a) - 100;

        printf("%.2lf%%\n", res);
return 0;
}
