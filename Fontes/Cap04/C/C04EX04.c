// C04EX04.C

#include <stdio.h>
#include <ctype.h>

int main()
{
  int N, I, R;
  char RESP;
  RESP = 'S';
  while (toupper(RESP) == 'S')
    {
      printf("Entre valor numrico: "); scanf("%i", &N);
      fflush(stdin);
      printf("\n");
      for (I = 1; I <= 10; I++)
        {
          R = N * I;
          printf("%2i X %2i = %3i\n", N, I, R);
         }
      printf("\n");
      printf("Deseja continuar?\n");
      printf("Tecle [S] para SIM / qualquer tecla para NAO: ");
      scanf("%c", &RESP);
      fflush(stdin);
      printf("\n");
    }
  return 0;
}
