// C04EX03.CPP

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int N, I, R;
  cout << "Entre valor numerico: "; cin >> N;
  cin.ignore(80, '\n');
  cout << "\n";
  for (I = 1; I <= 10; I++)
    {
      R = N * I;
      cout << setw(2) << N << " X ";
      cout << setw(2) << I << " = ";
      cout << setw(3) << R << endl;
    }
  cout << endl;
  return 0;
}
