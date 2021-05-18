// C03EX07.C

#include <stdio.h>
#include <iso646.h>

int main()
{
  int N, R4, R5;
  printf("Entre um valor numerico natural: "); scanf("%i", &N);
  fflush(stdin);
  printf("\n");
  R4 = N % 4;
  R5 = N % 5;
  if (R4 == 0 and R5 == 0)
  {
    printf("%i\n", N);
  }
  else
  {
    printf("Valor nao e divisivel por 4 e 5.\n");
  }
  return 0;
}
