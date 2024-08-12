#include <iostream>

using namespace std;

int main()
{
  int op;

  cout << "----MENU----\n\n\n";
  cout << "1 - Levantar \t 2 - Consultar\n";
  cout << "3 - Depositar \t 4 - Outros\n";
  cin >> op;
  switch (op)
  {
  case 1:
    cout << "Levantar";
    break;
  case 2:
    cout << "Consultar";
    break;
  case 3:
    cout << "Depositar";
    break;
  case 4:
    cout << "Outros";
    break;
  default:
    cout << "Opcao invalida";
  }
}