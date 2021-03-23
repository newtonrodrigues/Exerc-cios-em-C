#include <stdio.h>
#include <stdlib.h>

int main()
{
   int t, n, i;
   long long int fib[61];
   scanf("%d", &t); //quantidade casos de teste

   fib[0] = 0; // valores que o exercicio já forneceu
   fib[1] = 1;


   for(i=2; i < 61; i++){ // vetor de 64 bits solicitado no exercicio

    fib[i] = fib[i -1] + fib[i-2]; // sequencia logica do preenchimento fibonatti

   }
   for(i = 0; i < t; i++ ){ //  // for para consulta no vetor, qual posição sera consultada
        scanf("%d", &n);
        printf("Fib(%d) = %lld\n", n, fib[n]);
   } //  imprimir a posição e seu respectivo valor


    return 0;
}
