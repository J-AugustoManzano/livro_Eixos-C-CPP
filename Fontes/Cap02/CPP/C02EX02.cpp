// C02EX02.CPP

#include <iostream>
using namespace std;

int main()
{
  char NOME[50];
  cout << "Informe nome: ";
  cin.getline(NOME, sizeof(NOME));
  cout << "Ola, " << NOME << ".\n";
  return 0;
}
