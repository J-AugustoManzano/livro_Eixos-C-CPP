// C07EX01.C

#include <stdio.h>

int main()
{
  int A[5], I, J, X;
  printf("Leitura e apresentacao ordenada de valores\n\n");

  // Entrada dos valores

  for (I = 0; I <= 4; I++)
    {
      printf("Informe o %2io. valor = ", I + 1);
      scanf("%i", &A[I]);
      fflush(stdin);
    }
  printf("\n");

  // Classificacao dos valores

  for (I = 0; I <= 3; I++)
    for (J = I + 1; J <= 4; J++)
      if (A[I] > A[J])
        {
          X = A[I];
          A[I] = A[J];
          A[J] = X;
        }

  // Apresentacao dos valores

  for (I = 0; I <= 4; I++)
    {
      printf("%2io. valor = %i\n", I + 1, A[I]);
    }

  return 0;
}
