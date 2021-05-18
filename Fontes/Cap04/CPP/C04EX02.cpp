// C04EX02.CPP

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int N, I, R;
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
  while (I <= 10);
  cout << endl;
  return 0;
}
