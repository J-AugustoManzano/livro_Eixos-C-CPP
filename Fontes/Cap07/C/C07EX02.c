// C07EX02.C

#include <stdio.h>
#include <string.h>

int main()
{
  int I, J;
  char NOME[10][40], X[40];
  printf("Leitura e apresentacao de nomes ordenados\n\n");

  // Entrada de nomes

  for (I = 0; I <= 9; I++)
    {
      printf("Informe o %2io. nome: ", I + 1);
      scanf("%[^\n]", & NOME[I]);
      fflush(stdin);
    }
  printf("\n");

  // Classificacao dos nomes

  for (I = 0; I <= 8; I++)
    for (J = I + 1; J <= 9; J++)
      if (strcmp(NOME[I], NOME[J]) > 0)
        {
          strcpy(X, NOME[I]);
          strcpy(NOME[I], NOME[J]);
          strcpy(NOME[J], X);
        }

  // Apresentacao dos nomes

  for (I = 0; I <= 9; I++)
    {
       printf("%2do. nome: %s\n", I + 1, NOME[I]);
    }

  return 0;
}
