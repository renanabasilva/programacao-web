#include <iostream>
using namespace std;

void calculaTabuada(int numero)
{
  for (int calc = 0; calc <= 10; calc++)
  {
    cout << numero << " x " << calc << " = " << numero * calc << endl;
  }
}

int main()
{
  int numero;

  cout << "Digite o numero da tabuada desejada (Aperte 0 para terminar): ";

  while (true)
  {
    cin >> numero;
    if (numero == 0)
    {
      break;
    }
    calculaTabuada(numero);
    cout << endl << "Digite o numero da tabuada desejada (Aperte 0 para terminar): ";
  }

  return 0;
}