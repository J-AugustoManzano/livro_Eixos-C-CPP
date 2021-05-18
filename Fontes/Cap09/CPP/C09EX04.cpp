// C09EX04.CPP

#include <iostream>
using namespace std;

int fatorial(int N)
{
  int I, FAT = 1;
  for (I = 1; I <= N; I++)
    {
      FAT *= I;
    }
  return FAT;
}

int main(void)
{
  int X;
  cout << "Calculo de fatorial\n";
  cout << "\nEntre um valor inteiro: "; cin >> X;
  cin.ignore(80, '\n');
  cout << "\nFatorial de " << X << " = a: " << fatorial(X) << endl;
  return 0;
}
