#include <iostream>
#include <limits>
using namespace std;

int main()
{
  int num1, num2;

  cout << "Digite o primeiro numero: ";
  cin >> num1;

  if (cin.fail())
  {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Entrada invalida. Por favor, digite um número inteiro." << endl;
    return 1;
  }

  cout << "Digite o segundo numero: ";
  cin >> num2;

  if (cin.fail())
  {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Entrada invalida. Por favor, digite um numero inteiro." << endl;
    return 1;
  }

  int soma = num1 + num2;
  cout << "A soma entre " << num1 << " e " << num2 << " e: " << soma << endl;

  return 0;
}
