// C03EX05.C

#include <stdio.h>
#include <iso646.h>

int main()
{
  int CODIGO;
  printf("Entre o codigo de acesso: "); scanf("%i", &CODIGO);
  fflush(stdin);
  printf("\n");
  if (CODIGO == 1 or CODIGO == 2 or CODIGO == 3)
    {
      if (CODIGO == 1)
        {
          printf("Foi acionado o codigo: um.\n");
        }
      if (CODIGO == 2)
        {
          printf("Foi acionado o codigo: dois.\n");
        }
      if (CODIGO == 3)
        {
          printf("Foi acionado o codigo: tres.\n");
        }
    }
  else
  {
    printf("Codigo invalido.\n");
  }
  return 0;
}
