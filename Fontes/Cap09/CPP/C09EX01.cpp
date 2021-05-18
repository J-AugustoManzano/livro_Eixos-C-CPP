// C09EX01.CPP

#include <iostream>
#include <iomanip>
using namespace std;

float R, A, B;

void pausa()
{
  cout << endl;
  cout << "Tecle <Enter> para encerrar... ";
  cin.get();
}

void entrada()
{
  cout << endl;
  cout << "Entre um valor para a variavel [A]: ";
  cin >> A;
  cin.ignore(80, '\n');
  cout << "Entre um valor para a variavel [B]: ";
  cin >> B;
  cin.ignore(80, '\n');
}

void saida()
{
  cout << endl;
  cout << "O resultado entre A e B = " << setw(8);
  cout << R << endl;
  pausa();
}

void rotadicao()
{
  cout << endl;
  cout << "Rotina de Adicao" << endl;
  cout << "----------------" << endl;
  entrada();
  R = A + B;
  saida();
}

void rotsubtracao()
{
  cout << endl;
  cout << "Rotina de Subtracao" << endl;
  cout << "-------------------" << endl;
  entrada();
  R = A - B;
  saida();
}

void rotmultiplicacao()
{
  cout << endl;
  cout << "Rotina de Multiplicacao" << endl;
  cout << "-----------------------" << endl;
  entrada();
  R = A * B;
  saida();
}

void rotdivisao()
{
  cout << endl;
  cout << "Rotina de Divisao" << endl;
  cout << "-----------------" << endl;
  entrada();
  if (B == 0)
    {
      cout << endl;
      cout << "Erro de divisao" << endl;
      pausa();
    }
  else
    {
      R = A / B;
      saida();
    }
}

int main()
{
  int OPCAO = 0;
  while (OPCAO != 5)
    {
      cout << setprecision(2);
      cout << setiosflags(ios::fixed);
      cout << endl;
      cout << "--------------------" << endl;
      cout << "Programa Calculadora" << endl;
      cout << "   Menu Principal   " << endl;
      cout << "--------------------" << endl;
      cout << endl;
      cout << "[1] - Adicao" << endl;
      cout << "[2] - Subtracao" << endl;
      cout << "[3] - Multiplicacao" << endl;
      cout << "[4] - Divisao" << endl;
      cout << "[5] - Fim de Programa" << endl;
      cout << endl;
      cout << "Escolha uma opcao: ";
      cin >> OPCAO;
      cin.ignore(80, '\n');
      if (OPCAO != 5)
        {
          switch (OPCAO)
            {
              case  1: rotadicao();        break;
              case  2: rotsubtracao();     break;
              case  3: rotmultiplicacao(); break;
              case  4: rotdivisao();       break;
            }
        }
    }
    return 0;
}
