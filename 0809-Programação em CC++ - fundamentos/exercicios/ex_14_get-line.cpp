#include <iostream>
#include <string>

using namespace std;

int main()
{
  string nomeCompleto;

  for (int i = 0; i < 3; i++)
  {
    // cin.ignore;
    cout << "Digite seu nome completo: ";
    getline(cin, nomeCompleto);
    cout << "Nome completo: " << nomeCompleto << endl;
  }
  return 0;
}