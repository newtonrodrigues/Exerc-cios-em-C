#include <stdio.h>

int main()
{
    int c1, q1, c2, q2;
    double p1, p2, vt;

    scanf ("%d %d %lf", &c1, &q1, &p1);
    scanf("%d %d %lf", &c2, &q2, &p2);
    vt =  q1*p1 + q2*p2;
    printf("VALOR A PAGAR: R$ %.2lf\n", vt);




}
