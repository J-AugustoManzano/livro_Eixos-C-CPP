// C08EX02.CPP

#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{

  // Definicao de variaveis e configuracao do ambiente

  struct CAD_ALUNO
    {
      char  NOME[41];
      float NOTA[4];
      float MEDIA;
    };

  int I, J, TAMANHO;
  float SOMA_NT, SOMA_MD, MEDIA_GP;
  char ENTRANOTA[6], QUANT[15];
  CAD_ALUNO *PALUNO, *PI, *PJ, X;

  cout << setprecision(2);
  cout << setiosflags(ios::fixed);

  // Rotina para a entrada dos nomes

  cout << "Cadastro de Alunos\n\n";
  cout << "Entre a quantidade de elementos: ";
  cin.getline(QUANT, sizeof(QUANT));
  TAMANHO = atoi(QUANT);
  PALUNO = new CAD_ALUNO[sizeof(CAD_ALUNO) * TAMANHO];

  // Rotina para a entrada dos nomes e notas

  PI = PALUNO;
  cout << endl;
  for (I = 0; I <= TAMANHO - 1; I++)
    {
      cout << "Informe o " << setw(2) << I + 1 << "o. nome: ";
      cin.getline(PI->NOME, sizeof(PI->NOME));
      cout << endl;
      cout << "Entre as notas:\n" << endl;
      for (J = 0; J <= 3; J++)
        {
           cout << setw(2) << J + 1 << "a. nota: ";
           cin.getline(ENTRANOTA, sizeof(ENTRANOTA) - 1);
           PI->NOTA[J] = atof(ENTRANOTA);
        }
      cout << endl;
      PI++;
    }

  // Processamento do calculo das medias

  PI = PALUNO;
  SOMA_MD = 0;
    for (I = 0; I <= TAMANHO - 1; I++)
    {
      SOMA_NT = 0;
      for (J = 0; J <= 3; J++)
        SOMA_NT = SOMA_NT + PI->NOTA[J];
      PI->MEDIA = SOMA_NT / 4;
      SOMA_MD = SOMA_MD + PI->MEDIA;
      PI++;
    }
  MEDIA_GP = SOMA_MD / TAMANHO;

  // Classificacao dos dados

  PI = PALUNO;
  for (I = 0; I < TAMANHO - 1; I++)
    {
      PJ = PI;
      PJ++;
      for (J = I + 1; J < TAMANHO; J++)
        {
          if (strcmp(PI->NOME, PJ->NOME) > 0)
            {
              X = *PI;
              *PI = *PJ;
              *PJ = X;
            }
          PJ++;
        }
      PI++;
    }

  // Apresentacao da tabela nome/notas/media

  cout << endl;
  cout << "Relatorio Geral" << endl;
  cout << endl;
  cout << setiosflags(ios::left);
  cout << setw(41) << "PALUNO";
  cout << resetiosflags(ios::left);
  cout << setiosflags(ios::right);
  cout << setw( 7) << "Nota1";
  cout << setw( 7) << "Nota2";
  cout << setw( 7) << "Nota3";
  cout << setw( 7) << "Nota4";
  cout << setw( 7) << "Media";
  cout << endl;
  cout << endl;
  PI = PALUNO;
  for (I = 0; I <= TAMANHO - 1; I++)
    {
      cout << resetiosflags(ios::right);
      cout << setiosflags(ios::left);
      cout << setw(41) << PI->NOME;
      cout << resetiosflags(ios::left);
      cout << setiosflags(ios::right);
      for (J = 0; J <= 3; J++)
        cout << setw( 7) << PI->NOTA[J];
      cout << setw( 7) << PI->MEDIA;
      cout << endl;
      PI++;
    }
  cout << endl;
  cout << setw(70) << "Media Geral = " << setw( 6) << MEDIA_GP;
  cout << endl;
  delete(PALUNO);
  return 0;
}
