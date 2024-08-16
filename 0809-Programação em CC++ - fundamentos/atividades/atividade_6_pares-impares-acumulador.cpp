#include <iostream>
using namespace std;

int main()
{
  int numero, somaPares = 0, somaImpares = 0;

  cout << "Digite numeros inteiros (Aperte 0 para terminar): " << endl;

  while (true)
  {
    cin >> numero;

    if (numero == 0)
    {
      break;
    }

    if (numero % 2 == 0)
    {
      somaPares += numero;
    }
    else
    {
      somaImpares += numero;
    }
  }

  cout << "Soma dos numeros pares: " << somaPares << endl;
  cout << "Soma dos numeros impares: " << somaImpares << endl;

  return 0;
}