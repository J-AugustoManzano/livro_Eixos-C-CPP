// C06EX06.C

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int I, J, LINHAS, COLUNAS;
  int **PMATRIZ;

  printf("Entre a quantidade de linhas ...: ");
  scanf("%i", &LINHAS);
  fflush(stdin);
  printf("Entre a quantidade de colunas ..: ");
  scanf("%i", &COLUNAS);
  fflush(stdin);

  PMATRIZ = (int **) malloc(LINHAS * sizeof(int *));
  for (I = 0; I <= LINHAS-1; I++)
    {
      PMATRIZ[I] = (int *) malloc(COLUNAS * sizeof(int));
    }

  printf("\n");
  for (I = 0; I <= LINHAS-1; I++)
    {
      for (J = 0; J <= COLUNAS-1; J++)
        {
          printf("Entre um valor para a variavel MATRIZ[");
          printf("%i,%i] = ", I + 1, J + 1);
          scanf("%i", &PMATRIZ[I][J]);
          fflush(stdin);
        }
    }

  printf("\n");
  printf("Os valores informados sao:\n\n");
  for (I = 0; I <= LINHAS-1; I++)
    {
      for (J = 0; J <= COLUNAS-1; J++)
        {
          printf("MATRIZ[%i,%i] = ", I + 1, J + 1);
          printf("%4i\n", PMATRIZ[I][J]);
        }
    }

  for (I = 0; I <= LINHAS-1; I++)
    {
      free(PMATRIZ[I]);
    }
  free(PMATRIZ);

  return 0;
}
