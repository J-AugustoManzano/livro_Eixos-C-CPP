// C02EX05.C

#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main()
{
  float V, H, R;
  printf("Entre a altura ...: ");
  scanf("%f", &H);
  fflush(stdin);
  printf("Entre o raio .....: ");
  scanf("%f", &R);
  fflush(stdin);
  V = H * PI * pow(R, 2);
  printf("Area do Cilindro .: %f\n", V);
  return 0;
}
