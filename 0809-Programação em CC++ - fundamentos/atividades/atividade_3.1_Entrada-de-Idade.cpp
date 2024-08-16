#include <iostream>
#include <limits>
using namespace std;

int main()
{
  int idade;

  cout << "Digite sua idade: ";
  cin >> idade;

  if (cin.fail())
  {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Entrada invalida. Por favor, digite um numero inteiro." << endl;
  }
  else
  {
    cout << "Sua idade e: " << idade << " anos." << endl;
  }

  return 0;
}
