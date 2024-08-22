#include <iostream>
using namespace std;

int main()
{
  int numeros[5];
  int c_array = sizeof(numeros) / sizeof(numeros[0]);

  for (int i = 0; i < c_array; i++)
  {
    cout << "Digite o " << i + 1 << "o valor para criar a matriz: ";
    cin >> numeros[i];
  }

  cout << "A matriz completa e: [ ";
  for (int i = 0; i < c_array; i++)
  {
    cout << numeros[i];
    i < (c_array - 1) ? cout << ", " : cout << " ";
  }
  cout << "]" << endl;
  cout << "Comprimento do array: " << c_array << endl;

  return 0;
}