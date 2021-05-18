// C04EX03.C

#include <stdio.h>

int main()
{
  int N, I, R;
  printf("Entre valor numerico: "); scanf("%i", &N);
  fflush(stdin);
  printf("\n");
  for (I = 1; I <= 10; I++)
    {
      R = N * I;
      printf("%2i X %2i = %3i\n", N, I, R);
    }
  printf("\n");
  return 0;
}
