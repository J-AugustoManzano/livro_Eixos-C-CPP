// C04EX05.C
#include <stdio.h>
#include <iso646.h>
int N, I, R;

int main()
{
  printf("Entre valor numerico: "); scanf("%i", &N);
  fflush(stdin);
  printf("\n");
  I = 1;
  do
    {
      R = N * I;
      printf("%2i X %2i = %3i\n", N, I, R);
      I++;
    }
  while (not(I > 10));
  printf("\n");
  return 0;
}
