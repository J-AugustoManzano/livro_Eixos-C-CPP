// C06EX05.C

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int I, TAMANHO;
  float *PMATRIZ;

  printf("Entre a quantidade de elementos: ");
  scanf("%i", &TAMANHO);
  fflush(stdin);

  PMATRIZ = (float *) malloc(TAMANHO * sizeof(float));

  printf("\n");
  for (I = 0 ; I <= TAMANHO-1; I++)
    {
      printf("Entre um valor para a variavel MATRIZ[");
      printf("%i] = ", I + 1);
      scanf("%f", &PMATRIZ[I]);
      fflush(stdin);
    }
  printf("\n");
  printf("Os valores informados sao:\n\n");
  for (I = 0 ; I <= TAMANHO-1; I++)
    {
       printf("MATRIZ[%i] = ", I + 1);
       printf("%4.2f\n", PMATRIZ[I]);
    }

  free(PMATRIZ);

  return 0;
}
