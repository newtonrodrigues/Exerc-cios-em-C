#include <stdio.h>
#include <stdlib.h>

int main()
{
    int velocidade;
    float mediakml;
    int distancia5km, distancia8km, distancia12km;
    float qtdelitros5km, qtdelitros8km, qtdelitros12km;

    printf("Digite a sua velocidade: ");
    scanf("%d", &velocidade);

    printf("Digite a media de kilometros por litro: ");
    scanf("%f", &mediakml);

    distancia5km = velocidade * 5;
    distancia8km = velocidade* 8;
    distancia12km= velocidade* 12;

    qtdelitros5km = distancia5km / mediakml;
    qtdelitros8km = distancia8km / mediakml;
    qtdelitros12km= distancia12km / mediakml;

    printf("A distancia percorrida em 5 kilometros e: %d km\n", distancia5km);
    printf("A distancia percorrida em 8 kilometros e: %d km\n", distancia8km);
    printf("A distancia percorrida em 12 kilometros e: %d km\n\n", distancia12km);

    printf("A quantidade de litros gasto em 5 kilometros foi: %.2f litros \n", qtdelitros5km);
    printf("A quantidade de litros gasto em 8 kilometros foi: %.2f litros \n", qtdelitros8km);
    printf("A quantidade de litros gasto em 12 kilometros foi: %.2f litros \n\n", qtdelitros12km);

    printf("A distancia percorrida em 12 horas de viagem sera: %d km com %.2f litros consumidos", distancia12km, qtdelitros12km);

    return 0;
}
