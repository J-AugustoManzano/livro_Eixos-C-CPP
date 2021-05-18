// C08EX01.C

#include <stdio.h>

float R, A, B;

void pausa()
{
  char TECLA;
  printf("\n");
  printf("Tecle <Enter> para encerrar... ");
  scanf("%c", &TECLA);
  fflush(stdin);
}

void entrada()
{
  printf("\n");
  printf("Entre um valor para a variavel [A]: ");
  scanf("%f", &A);
  fflush(stdin);
  printf("Entre um valor para a variavel [B]: ");
  scanf("%f", &B);
  fflush(stdin);
}

void saida(void)
{
  printf("\n");
  printf("O resultado entre A e B = ");
  printf("%8.2f\n", R);
  pausa();
}

void rotadicao()
{
  printf("\n");
  printf("Rotina de Adicao\n");
  printf("----------------\n");
  entrada();
  R = A + B;
  saida();
}

void rotsubtracao()
{
  printf("\n");
  printf("Rotina de Subtracao\n");
  printf("-------------------\n");
  entrada();
  R = A - B;
  saida();
}

void rotmultiplicacao()
{
  printf("\n");
  printf("Rotina de Multiplicacao\n");
  printf("-----------------------\n");
  entrada();
  R = A * B;
  saida();
}

void rotdivisao()
{
  printf("\n");
  printf("Rotina de Divisao\n");
  printf("-----------------\n");
  entrada();
  if (B == 0)
    {
      printf("\n");
      printf("Erro de divisão\n");
      pausa();
    }
  else
    {
      R = A / B;
      saida();
    }
}

int main()
{
  int OPCAO = 0;
  while (OPCAO != 5)
    {
      printf("\n");
      printf("--------------------\n");
      printf("Programa Calculadora\n");
      printf("   Menu Principal\n");
      printf("--------------------\n");
      printf("\n");
      printf("[1] - Adicao\n");
      printf("[2] - Subtracao\n");
      printf("[3] - Multiplicacao\n");
      printf("[4] - Divisao\n");
      printf("[5] - Fim de Programa\n");
      printf("\n");
      printf("Escolha uma opcao: ");
      scanf("%i", &OPCAO);
      fflush(stdin);
      if (OPCAO != 5)
        {
          switch (OPCAO)
            {
              case  1: rotadicao();        break;
              case  2: rotsubtracao();     break;
              case  3: rotmultiplicacao(); break;
              case  4: rotdivisao();       break;
            }
        }
    }
    return 0;
}
