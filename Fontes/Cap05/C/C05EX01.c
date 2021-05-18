// C05EX01.C

#include <stdio.h>

int main()
{
  int IDADE = 25;
  int *PIDADE = 0;

  PIDADE = &IDADE;

  printf("O valor idade %i esta armazenado no", IDADE);
  printf(" endereco de memoria %x\n", PIDADE);

  return 0;
}
