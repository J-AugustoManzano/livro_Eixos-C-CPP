// C09EX02.C

#include <stdio.h>

void fatorial(int N)
{
  int I;
  long int FAT = 1;
  for (I = 1; I <= N; I++)
    {
      FAT *= I;
    }
  printf("\nFatorial de %i = a %i\n", N, FAT);
}

int main()
{
  int X, Y;
  printf("Calculo de fatorial\n");
  printf("\nEntre um valor inteiro: ");
  scanf("%i", &X);
  fflush(stdin);
  fatorial(X);
  return 0;
}
