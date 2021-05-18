// C02EX02.C

#include <stdio.h>

int main()
{
  char NOME[50];
  printf("Informe nome: ");
  scanf("%[^\n]", &NOME);
  printf("Ola, %s.\n", NOME);
  return 0;
}
