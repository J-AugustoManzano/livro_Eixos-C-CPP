// C05EX01.CPP

#include <iostream>
using namespace std;

int main()
{
  int IDADE = 25;
  int *PIDADE = 0;

  PIDADE = &IDADE;

  cout << "O valor idade " << IDADE << " esta armazenado no";
  cout << " endereco de memoria " << PIDADE << endl;

  return 0;
}
