// C03EX04.C

#include <stdio.h>
#include <iso646.h>

int main()
{
  int NUMERO;
  printf("Entre um valor: "); scanf("%i", &NUMERO);
  fflush(stdin);
  printf("\n");
  if (NUMERO >= 20 and NUMERO <= 90)
  {
    printf("O valor esta entre 20 e 90.");
  }
  else
  {
    printf("O valor nao esta entre 20 e 90.");
  }
  return 0;
}
