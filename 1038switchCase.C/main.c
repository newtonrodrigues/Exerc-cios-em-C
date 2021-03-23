#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod, quant;
    double vf;
    scanf("%d %d", &cod, &quant);

    switch(cod){

        case 1:
            vf = quant * 4.00;
            break;

        case 2:
            vf = quant * 4.50;
            break;

        case 3:
            vf = quant * 5.00;
            break;

        case 4:
            vf = quant * 2.00;
            break;

        case 5:
            vf = quant * 1.50;
            break;
    }
        printf("Total: R$ %.2lf\n", vf);
return 0;
}
