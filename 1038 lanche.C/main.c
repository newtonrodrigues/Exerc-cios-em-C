#include <stdio.h>
#include <stdlib.h>

int main()
{

   int CODIGO, quantidade;
   double contaPag, totAPag;

   scanf("%d %d", &CODIGO, &quantidade);

   if (CODIGO == 1){

    contaPag = 4;

    } else if (CODIGO == 2){

    contaPag = 4.5;

    } else if (CODIGO == 3){

    contaPag = 5;

    } else if (CODIGO == 4){

    contaPag = 2;

    } else if (CODIGO == 5){

    contaPag = 1.5;

    }

    totAPag = contaPag * quantidade;

    printf("Total: R$ %.2lf\n", totAPag);

    return 0;
}
