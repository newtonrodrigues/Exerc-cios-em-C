#include <stdio.h>

int main() {

  int A, B, S, Numero = 0;

  scanf ("%d", &A);
  scanf ("%d", &B);
  scanf ("%d", &S);



  if ((A > B) && (A > S)){
         Numero = A;
         }else if ((A < B) && (B < S)){
         Numero = S;
         }else if ((A > B) && (A < S)){
         Numero = S;
         } else if ((A < B) && (A > S)){
         Numero = B;
         } else if ((B > A) && (B > S)){
         Numero = B;
         } else if ((B > A) && (B < S)){
         Numero = S;
         }

  printf("%d eh o maior\n", Numero);

  return 0;
}
