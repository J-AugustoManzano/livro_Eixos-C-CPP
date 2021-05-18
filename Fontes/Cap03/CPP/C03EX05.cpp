// C03EX05.CPP

#include <iostream>
#include <ciso646>
using namespace std;

int main()
{
  int CODIGO;
  cout << "Entre o codigo de acesso: "; cin >> CODIGO;
  cin.ignore(80, '\n');
  cout << "\n";
  if (CODIGO == 1 or CODIGO == 2 or CODIGO == 3)
    {
      if (CODIGO == 1)
        {
          cout << "Foi acionado o codigo: um.\n";
        }
      if (CODIGO == 2)
        {
          cout << "Foi acionado o codigo: dois.\n";
        }
      if (CODIGO == 3)
        {
          cout << "Foi acionado o codigo: tres.\n";
        }
    }
  else
  {
    cout << "Codigo invalido.\n";
  }
  return 0;
}
