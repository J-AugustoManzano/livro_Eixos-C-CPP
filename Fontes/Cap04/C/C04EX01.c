// C04EX01.C

#include <stdio.h>

int main()
{
  int N, I, R;
  printf("Entre valor numerico: "); scanf("%i", &N);
  fflush(stdin);
  printf("\n");
  I = 1;
  while (I <= 10)
    {
      R = N * I;
      printf("%2i X %2i = %3i\n", N, I, R);
      I = I + 1;
    }
  printf("\n");
  return 0;
}
