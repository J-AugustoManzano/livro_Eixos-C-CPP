// C04EX05.CPP
#include <iostream>
#include <iomanip>
#include <ciso646>
using namespace std;
int N, I, R;

int main()
{
  cout << "Entre valor numerico: "; cin >> N;
  cin.ignore(80, '\n');
  cout << "\n";
  I = 1;
  do
    {
      R = N * I;
      cout << setw(2) << N << " X ";
      cout << setw(2) << I << " = ";
      cout << setw(3) << R << endl;
      I++;
    }
  while (not(I > 10));
  cout << endl;
  return 0;
}
