#include <stdio.h>
#include <stdlib.h>
int main()
 {

    int N, a, b, c, d;

    scanf ("%d", &N);

    a = N / 365;
    b = N % 365;
    c = b / 30;
    d = b % 30;

    printf ("%d ano(s)\n", a);
    printf ("%d mes(es)\n", c);
    printf ("%d dia(s)\n", d);

    return 0;
}
