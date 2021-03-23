#include <stdio.h>
#include <stdlib.h>
#define MATRIZ 9
int main() {
    int matriz[MATRIZ][MATRIZ];
    int i, j, n = 0;
    int soma;
    int k;

    // srand(time(NULL));   //So deve ser chamada uma única vez. Sem esta execucao
                            //os valores gerados sempre serao os mesmos

    //leitura da matriz
    for (i = 0; i < MATRIZ; i++){
        for (j = 0; j < MATRIZ; j++){
            matriz[i][j] = rand() % 10;
        }
    }

    for (i = 0; i < MATRIZ; i++){
        for (j = 0; j < MATRIZ; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (i = 1;i < (MATRIZ-1);i++){
        for(j = 0;j <= n;j++){
            printf("%d ",matriz[i][j]);
        }

        //((MATRIZ+1) % 2): Explicao -> quando a matriz for impar nao deve subtrair nada
        //pois a divisao vai coincidir com a ponta do triangulo que so tera um valor
        //mas quando a matriz for par deve subtrair 1, porque neste caso existem
        //dois valores que estarao na ponta do triangulo

        //quando chegar na ponta do triangulo para de fazer n++ (incremento)
        if (i<((MATRIZ/2)-((MATRIZ+1) % 2))){
            n++;
        } else {
        //e comeca a fazer n-- (decremento)
            //tratativa para o bico do triangulo nos casos de matriz quadrada par e impar
            if (i != (MATRIZ/2)-1){ //se o i apontar para uma linha apos o bico do triangulo
                                    //decrementa o i
                n--;
            } else if ((MATRIZ % 2) != 0) { //neste caso o i esta apontando exatamente no meio do bico
                                            // do triangulo. Se a matriz for do tipo impar (Matriz % 2)!=0
                                            // decrementa
                n--;
            }
            //como nao implementamos nada para o caso do i estar no bico da matriz e ela for positiva
            //simplesmente nao fazemos nada com o n, ele continuara apontando para a mesma coluna
            //e no proxima execucao do laco sera impresso o segundo valor do bico da matriz quadrada
        }

        printf("\n");
    }

    printf("\n");

    return 0;
}
