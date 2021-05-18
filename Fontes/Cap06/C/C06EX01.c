// C06EX01.C

#include <stdio.h>

int main()
{
  float MD[8], SOMA = 0, MEDIA;
  int I;
  printf("Calculo de media escolar\n\n");
  for (I = 0; I <= 7; I++)
    {
      printf("Informe a %ia. nota: ", I + 1);
      scanf("%f", &MD[I]);
      fflush(stdin);
      SOMA += MD[I];
    }
  MEDIA = SOMA / 8;
  printf("\nA media do grupo equivale a: %8.2f\n", MEDIA);
  printf("\n");
  return 0;
}
