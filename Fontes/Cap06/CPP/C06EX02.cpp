// C06EX02.CPP

#include <iostream>
using namespace std;

int main()
{
  int A[5];
  int I, SOMA = 0;
  cout << "Somatorio de elementos impares\n\n";

  // Entrada de dados

  for (I = 0; I <= 4; I++)
    {
      cout << "Informe um valor para o elemento nr. " << I + 1 << ": ";
      cin >> A[I];
      cin.ignore(80, '\n');
    }

  // Processamento par ou impar

  for (I = 0; I <= 4; I++)
    {
      if (A[I] % 2 != 0)
        {
          SOMA += A[I];
        }
    }

  // Apresentacao da soma

  cout << "\n\nA soma dos elementos equivale a: " << SOMA;
  cout << endl;
  return 0;
}
