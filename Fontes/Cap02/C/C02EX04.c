// C02EX04.C

#include <stdio.h>

int main()
{
  float HT, VH, PD, TD, SB, SL;
  printf("Entre a quantidade de horas trabalhadas ...: ");
  scanf("%f", &HT);
  fflush(stdin);
  printf("Entre o valor da hora de trabalho .........: ");
  scanf("%f", &VH);
  fflush(stdin);
  printf("Percentual de desconto ....................: ");
  scanf("%f", &PD);
  fflush(stdin);
  SB = HT * VH;
  TD = (PD / 100) * SB;
  SL = SB - TD;
  printf("\n");
  printf("Salario Bruto ....: %8.2f\n", SB);
  printf("Desconto .........: %8.2f\n", TD);
  printf("Salario Liquido ..: %8.2f\n", SL);
  return 0;
}
