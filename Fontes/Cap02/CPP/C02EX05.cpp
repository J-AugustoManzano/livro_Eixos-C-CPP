// C02EX05.CPP

#include <iostream>
#include <cmath>
#define PI 3.14159
using namespace std;

int main()
{
  float V, H, R;
  cout << "Entre a altura ...: ";
  cin >> H;
  cin.ignore(80, '\n');
  cout << "Entre o raio .....: ";
  cin >> R;
  cin.ignore(80, '\n');
  V = H * PI * pow(R, 2);
  cout << "Area do Cilindro .: " << V << endl;
  return 0;
}
