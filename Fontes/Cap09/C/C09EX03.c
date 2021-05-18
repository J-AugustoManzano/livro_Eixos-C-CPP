// C09EX03.C

#include <stdio.h>

void fatorial(int N, long int *FAT)
{
  int I;
  for (I = 1; I <= N; I++)
    {
      *FAT *= I;
    }
}

int main()
{
  int X;
  long int Y = 1;
  printf("Calculo de fatorial\n");
  printf("\nEntre um valor inteiro: ");
  scanf("%i", &X);
  fflush(stdin);
  fatorial(X, &Y);
  printf("\nFatorial de %i = a: %i\n", X, Y);
  return 0;
}
