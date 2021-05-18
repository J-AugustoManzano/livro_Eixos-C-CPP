// C03EX01.C

#include <stdio.h>

int main()
{
  int A, B, R;
  printf("Entre o valor <A>: "); scanf("%i", &A);
  fflush(stdin);
  printf("Entre o valor <B>: "); scanf("%i", &B);
  fflush(stdin);
  printf("\n");
  R = A + B;
  if (R > 10)
  {
    printf("Resultado = %i\n", R);
  }
  return 0;
}
