// C06EX02.C

#include <stdio.h>

int main()
{
  int A[5];
  int I, SOMA = 0;
  printf("Somatorio de elementos impares\n\n");

  // Entrada de dados

  for (I = 0; I <= 4; I++)
    {
      printf("Informe um valor para o elemento nr. %i: ", I + 1);
      scanf("%i", &A[I]);
      fflush(stdin);
    }

  // Processamento par ou impar

  for (I = 0; I <= 4; I++)
    {
      if (A[I] % 2 != 0)
        {
          SOMA += A[I];
        }
    }

  // Apresentacao da soma

  printf("\n\nA soma dos elementos equivale a: %i", SOMA);
  printf("\n");
  return 0;
}
