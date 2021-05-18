// C08EX01.CPP

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

  CAD_ALUNO ALUNO[8], X;

  int I, J;
  float SOMA_NT, SOMA_MD, MEDIA_GP;
  char ENTRANOTA[6];
  cout << setprecision(2);
  cout << setiosflags(ios::fixed);

  // Rotina para a entrada dos nomes e notas

  cout << "Cadastro de alunos\n\n";
  for (I = 0; I <= 7; I++)
    {
      cout << "Informe o " << setw(2) << I + 1 << "o. nome: ";
      cin.getline(ALUNO[I].NOME, sizeof(ALUNO[I].NOME));
      cout << endl;
      cout << "Entre as notas:\n" << endl;
      for (J = 0; J <= 3; J++)
        {
           cout << setw(2) << J + 1 << "a. nota: ";
           cin.getline(ENTRANOTA, sizeof(ENTRANOTA));
           ALUNO[I].NOTA[J] = atof(ENTRANOTA);
        }
      cout << endl;
    }

  // Processamento do calculo das medias

  SOMA_MD = 0;
  for (I = 0; I <= 7; I++)
    {
      SOMA_NT = 0;
      for (J = 0; J <= 3; J++)
        {
          SOMA_NT = SOMA_NT + ALUNO[I].NOTA[J];
        }
      ALUNO[I].MEDIA = SOMA_NT / 4;
      SOMA_MD = SOMA_MD + ALUNO[I].MEDIA;
    }
  MEDIA_GP = SOMA_MD / 8;

  // Classificacao dos dados

  for (I = 0; I <= 6; I++)
    for (J = I + 1; J <= 7; J++)
      if (strcmp(ALUNO[I].NOME, ALUNO[J].NOME) > 0)
        {
          X = ALUNO[I];
          ALUNO[I] = ALUNO[J];
          ALUNO[J] = X;
        }

  // Apresentacao da tabela nome/notas/media

  cout << endl;
  cout << "Relatorio Geral" << endl;
  cout << endl;
  cout << setiosflags(ios::left);
  cout << setw(41) << "Aluno";
  cout << resetiosflags(ios::left);
  cout << setiosflags(ios::right);
  cout << setw( 7) << "Nota1";
  cout << setw( 7) << "Nota2";
  cout << setw( 7) << "Nota3";
  cout << setw( 7) << "Nota4";
  cout << setw( 7) << "Media";
  cout << endl;
  cout << endl;
  for (I = 0; I <= 7; I++)
    {
      cout << resetiosflags(ios::right);
      cout << setiosflags(ios::left);
      cout << setw(41) << ALUNO[I].NOME;
      cout << resetiosflags(ios::left);
      cout << setiosflags(ios::right);
      for (J = 0; J <= 3; J++)
        {
          cout << setw( 7) << ALUNO[I].NOTA[J];
        }
      cout << setw( 7) << ALUNO[I].MEDIA;
      cout << endl;
    }
  cout << endl;
  cout << setw(70) << "Media Geral = " << setw( 6) << MEDIA_GP;
  cout << endl;
  return 0;
}
