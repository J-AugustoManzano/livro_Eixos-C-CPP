// C03EX06.CPP

#include <iostream>
#include <ciso646>
using namespace std;

int main()
{
  int N;
  cout << "Entre um valor inteiro: "; cin >> N;
  cin.ignore(80, '\n');
  cout << "\n";
  if (not (N >= 3))
  {
    cout << N << endl;
  }
  return 0;
}
