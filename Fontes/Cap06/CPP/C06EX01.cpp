// C06EX01.CPP

#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
  float MD[8], SOMA = 0, MEDIA;
  int I;
  cout << setprecision(2);
  cout << setiosflags(ios::fixed);
  cout << "Calculo de media escolar\n\n";
  for (I = 0; I <= 7; I++)
    {
      cout << "Informe a " << I + 1 << "a. nota: ";
      cin >> MD[I];
      cin.ignore(80, '\n');
      SOMA += MD[I];
    }
  MEDIA = SOMA / 8;
  cout << "\nA media do grupo equivale a: " << setw(8);
  cout << MEDIA << endl;
  cout << endl;
  return 0;
}
