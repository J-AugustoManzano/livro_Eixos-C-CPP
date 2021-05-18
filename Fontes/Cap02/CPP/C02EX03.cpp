// C02EX03.CPP

#include <iostream>
using namespace std;

int main()
{
  int A, B, R;
  cout << "Informe o 1o. valor: "; cin >> A;
  cin.ignore(80, '\n');
  cout << "Informe o 2o. valor: "; cin >> B;
  cin.ignore(80, '\n');
  R = A + B;
  cout << "Resultado = " << R << endl;
  return 0;
}
