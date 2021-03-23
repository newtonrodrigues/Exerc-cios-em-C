#include <stdio.h>

int main() {

   float numero = 0;
   int valor, contador;

       for ( contador = 0; contador <= 5; contador ++ ){

        scanf("%f", &numero);

          if(numero > 0){

          valor += contador;

          printf("%d\n", contador);
          }
//* se colocar o contador, aparecera a soma das contagens em sua posicao quando o valor assumir que for positivo ou real
        }

        printf("%d valores informados sao positivos\n", valor);

    return 0;

}
