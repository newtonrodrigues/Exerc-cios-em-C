#include <stdio.h>

int main()
{
  int N, a, b, c, d, e, f, g, h, i, j, k, l, m, n;

  scanf ("%d", &N);

  a = N / 100;
  b = N % 100;
  c = b / 50;
  d = b % 50;
  e = d / 20;
  f = d % 20;
  g = f / 10;
  h = f % 10;
  i = h / 5;
  j = h % 5;
  k = j / 2;
  l = j % 2;
  m = l / 1;
  n = l % 1;

  printf ("%d\n\n", N);
  printf ("%d nota (s) de R$ 100,00\n\n", a);
  printf ("%d nota (s) de R$ 50,00\n\n", c);
  printf ("%d nota (s) de R$ 20,00\n\n", e);
  printf ("%d nota (s) de R$ 10,00\n\n", g);
  printf ("%d nota (s) de R$ 5,00\n\n", i);
  printf ("%d nota (s) de R$ 2,00\n\n", k);
  printf ("%d nota (s) de R$ 1,00\n\n", m);

  return 0;
}
