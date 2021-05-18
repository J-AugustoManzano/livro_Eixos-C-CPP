// C03EX01.CPP

#include <iostream>
using namespace std;

int main()
{
  int A, B, R;
  cout << "Entre o valor <A>: "; cin >> A;
  cin.ignore(80, '\n');
  cout << "Entre o valor <B>: "; cin >> B;
  cin.ignore(80, '\n');
  cout << "\n";
  R = A + B;
  if (R > 10)
  {
    cout << "Resultado = " << R << endl;
  }
  return 0;
}
