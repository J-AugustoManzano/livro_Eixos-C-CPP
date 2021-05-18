// C02EX03.C

#include <stdio.h>

int main()
{
  int A, B, R;
  printf("Informe o 1o. valor: "); scanf("%i", &A);
  fflush(stdin);
  printf("Informe o 2o. valor: "); scanf("%i", &B);
  fflush(stdin);
  R = A + B;
  printf("Resultado = %i\n", R);
  return 0;
}
