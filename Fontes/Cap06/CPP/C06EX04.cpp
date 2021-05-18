// C06EX04.CPP

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int I;
  char NOME[10][40];
  cout << "Leitura e apresentacao de nomes\n\n";

  // Entrada dos nomes

  for (I = 0; I <= 9; I++)
    {
      cout << "Informe o " << setw(2) << I + 1 << "o. nome: ";
      cin.getline(NOME[I], sizeof(NOME[I]));
    }
  cout << endl;

  // Apresentacao dos nomes

  for (I = 0; I <= 9; I++)
    {
      cout << setw(2) << I + 1 << "o. nome: " << NOME[I] << endl;
    }
  cout << endl;
  return 0;
}

