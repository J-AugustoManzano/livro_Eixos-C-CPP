// C09EX03.CPP

#include <iostream>
using namespace std;

void fatorial(int N, long int &FAT)
{
  int I;
  for (I = 1; I <= N; I++)
    {
      FAT *= I;
    }
}

int main()
{
  int X;
  long int Y = 1;
  cout << "Calculo de fatorial\n";
  cout << "\nEntre um valor inteiro: ";
  cin >> X;
  cin.ignore(80, '\n');
  fatorial(X, Y);
  cout << "\nFatorial de " << X << " = a: " << Y << endl;
  return 0;
}
