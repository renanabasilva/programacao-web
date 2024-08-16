#include <iostream>
#include <limits>
#include <string>
using namespace std;

int main()
{
  string nome;

  cout << "Digite seu nome completo: ";
  getline(cin, nome);

  if (cin.fail() || nome.empty())
  {
    cin.clear();
    cout << "Entrada invalida. O nome nao pode estar vazio." << endl;
  }
  else
  {
    cout << "Ola, " << nome << ", prazer em conhece-lo!" << endl;
  }

  return 0;
}
