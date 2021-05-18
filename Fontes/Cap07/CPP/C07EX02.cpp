// C07EX02.CPP

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main()
{
  int I, J;
  char NOME[10][40], X[40];
  cout << "Leitura e apresentacao de nomes ordenados\n\n";

  // Entrada de nomes

  for (I = 0; I <= 9; I++)
    {
      cout << "Informe o " << setw(2) << I + 1 << "o. nome: ";
      cin.getline(NOME[I], sizeof(NOME[I]));
    }
  cout << endl;

  // Classificacao dos nomes

  for (I = 0; I <= 8; I++)
    for (J = I + 1; J <= 9; J++)
      if (strcmp(NOME[I], NOME[J]) > 0)
        {
          strcpy(X, NOME[I]);
          strcpy(NOME[I], NOME[J]);
          strcpy(NOME[J], X);
        }

  // Apresentacao dos nomes

  for (I = 0; I <= 9; I++)
    {
      cout << setw(2) << I + 1 << "o. nome: " << NOME[I] << endl;
    }

  return 0;
}
