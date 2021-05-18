// C06EX03.C

#include <stdio.h>

int main()
{
  float NOTA[10][4];
  int I, J;
  printf("Leitura e apresentacao de notas\n");

  // Entrada das notas

  for (I = 0; I <= 9; I++)
    {
      printf("\nInforme as notas do %2io. aluno:\n\n", I + 1);
      for (J = 0; J <= 3; J++)
        {
          printf("Nota: %i = ", J + 1);
          scanf("%f", &NOTA[I][J]);
          fflush(stdin);
        }
    }
  printf("\n");

  // Apresentacao das notas

  for (I = 0; I <= 9; I++)
    {
      printf("\n\nAs notas do %2io. aluno sao:\n", I + 1);
      for (J = 0; J <= 3; J++)
        {
          printf("\nNota: %i = %8.2f", J + 1, NOTA[I][J]);
        }
    }
  printf("\n");
  return 0;
}
