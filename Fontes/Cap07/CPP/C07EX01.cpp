// C07EX01.CPP

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int A[5], I, J, X;
  cout << "Leitura e apresentacao ordenada de valores\n\n";

  // Entrada dos valores

  for (I = 0; I <= 4; I++)
    {
      cout << "Informe o " << setw(2) << I + 1 << "o. valor = ";
      cin >> A[I];
      cin.ignore(80, '\n');
    }
  cout << endl;

  // Classificacao dos valores

  for (I = 0; I <= 3; I++)
    for (J = I + 1; J <= 4; J++)
      if (A[I] > A[J])
        {
          X = A[I];
          A[I] = A[J];
          A[J] = X;
        }

  // Apresentacao dos valores

  for (I = 0; I <= 4; I++)
    {
      cout << setw(2) << I + 1 << "o. valor = " << A[I] << endl;
    }

  return 0;
}
