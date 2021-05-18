// C09EX04.C

#include <stdio.h>

int fatorial(int N)
{
  int I, FAT = 1;
  for (I = 1; I <= N; I++)
    {
      FAT *= I;
    }
  return FAT;
}

int main(void)
{
  int X;
  printf("Calculo de fatorial\n");
  printf("\nEntre um valor inteiro: "); scanf("%i", &X);
  fflush(stdin);
  printf("\nFatorial de %i = a: %i\n", X, fatorial(X));
  return 0;
}
