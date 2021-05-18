// C07EX03.CPP

#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
  int A[10], I, J, PESQ;
  bool ACHA;
  char RESP;
  cout << "Leitura de dez valores com pesquisa sequencial\n\n";

  // Entrada dos valores

  for (I = 0; I <= 9; I++)
    {
      cout << "Informe o " << setw(2) << I + 1 << "o. valor = ";
      cin >> A[I];
      cin.ignore(80, '\n');
    }
  cout << endl;

  // Apresentacao das notas

  do
    {
      cout << "\nEntre o valor a ser pesquisado: ";
      cin >> PESQ;
      cin.ignore(80, '\n');
      I = 0;
      ACHA = false;
      while (I <= 9 && ACHA == false)
        if (PESQ == A[I])
          ACHA = true;
        else
          I++;
      if (ACHA == true)
        cout << PESQ << " foi localizado na posicao " << I + 1;
      else
        cout << PESQ << " nao foi localizado";
      cout << endl;
      cout << "\n\nContinua? [S] para sim, qualquer tecla NAO: ";
      cin >> RESP;
      cin.ignore(80, '\n');
      RESP = toupper(RESP);
    }
  while (RESP == 'S');
  return 0;
}
