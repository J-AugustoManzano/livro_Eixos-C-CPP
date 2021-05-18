// C03EX06.C

#include <stdio.h>
#include <iso646.h>

int main()
{
  int N;
  printf("Entre um valor inteiro: "); scanf("%i", &N);
  fflush(stdin);
  printf("\n");
  if (not (N >= 3))
  {
    printf("%i\n", N);
  }
  return 0;
}
