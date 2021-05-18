// C07EX03.C

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
  int A[10], I, J, PESQ;
  int ACHA;
  char RESP;
  printf("Leitura de dez valores com pesquisa sequencial\n\n");

  // Entrada dos valores

  for (I = 0; I <= 9; I++)
    {
      printf("Informe o %2io. valor = ", I + 1);
      scanf("%i", &A[I]);
      fflush(stdin);
    }
  printf("\n");

  // Apresentacao das notas

  do
    {
      printf("\nEntre o valor a ser pesquisado: ");
      scanf("%i", &PESQ);
      fflush(stdin);
      I = 0;
      ACHA = 0;
      while (I <= 9 && ACHA == 0)
        if (PESQ == A[I])
          ACHA = 1;
        else
          I++;
      if (ACHA == 1)
        printf("%i foi localizado na posicao %i", PESQ , I + 1);
      else
        printf("%i não foi localizado", PESQ);
      printf("\n");
      printf("\n\nContinua? [S] para sim, qualquer tecla NAO: ");
      scanf("%c", &RESP);
      fflush(stdin);
      RESP = toupper(RESP);
    }
  while (RESP == 'S');
  return 0;
}
