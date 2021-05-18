// C06EX04.C

#include <stdio.h>

int main()
{
  int I;
  char NOME[10][40];
  printf("Leitura e apresentacao de nomes\n\n");

  // Entrada dos nomes

  for (I = 0; I <= 9; I++)
    {
      printf("Informe o %2io. nome: ", I + 1);
      scanf("%[^\n]", &NOME[I]);
      fflush(stdin);
    }
  printf("\n");

  // Apresentacao dos nomes

  for (I = 0; I <= 9; I++)
    {
      printf("%2io. nome: %s\n", I + 1, NOME[I]);
    }
  printf("\n");
  return 0;
}
