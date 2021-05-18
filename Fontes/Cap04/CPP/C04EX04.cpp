// C04EX04.CPP

#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
  int N, I, R;
  char RESP = 'S';
  while (toupper(RESP) == 'S')
    {
      cout << "Entre o valor da tabuada: "; cin >> N;
      cin.ignore(80, '\n');
      cout << "\n";
      I = 1;
      while (I <= 10)
        {
          R = N * I;
          cout << setw(2) << N << " X ";
          cout << setw(2) << I << " = ";
          cout << setw(3) << R << endl;
          I++;
        }
      cout << "\n";
      cout << "Deseja continuar?" << endl;
      cout << "Tecle [S] para SIM / qualquer tecla para NAO: ";
      cin.get(RESP);
      cin.ignore();
      cout << "\n";
    }
  return 0;
}
