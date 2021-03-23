#include <stdio.h>
#include <string.h>

int main() {


    char num[2];

    scanf("%s", &num);


    if (strcmp (num, "61") == 0){

        printf("Brasilia\n");

    } else if (strcmp (num, "71") == 0){

        printf("Salvador\n");
    } else if (strcmp (num, "11") == 0) {

        printf("Sao Paulo\n");

    } else if (strcmp (num,"21") == 0) {


        printf("Rio de Janeiro\n");

    } else if (strcmp (num, "32") == 0) {

        printf("Juiz de Fora\n");

    } else if (strcmp (num, "19") == 0) {

        printf("Campinas\n");

    } else if (strcmp (num, "27") == 0){

        printf("Vitoria\n");

    } else if (strcmp (num, "31") == 0) {

        printf("Belo Horizonte\n");

    } else {

        printf("DDD nao cadastrado\n");

    }

    return 0;

}
