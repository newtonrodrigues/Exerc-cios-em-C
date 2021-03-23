#include <stdio.h>
#include <stdlib.h>

int main(){
    double nota1, nota2, media;
    int resp, cont = 1;
    do {
        printf("Digite as notas: ");
        scanf("%lf %lf", &nota1, &nota2);
        media = (nota1 + nota2)/2;
        printf("Media do aluno %d e: %.2lf\n", cont,media);
        printf("Digite 1 para continuar ou 2 para sair\n");
        scanf("%d", &resp);
        cont++;

    } while (resp == 1);

    printf("\nNotas fechadas\n");

    return 0;

}
