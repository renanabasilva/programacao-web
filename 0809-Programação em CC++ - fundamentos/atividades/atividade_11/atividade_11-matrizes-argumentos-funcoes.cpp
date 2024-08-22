#include <iostream>
using namespace std;

int soma(int arr[], int tamanho)
{
  int acumulador = 0;

  for (int i = 0; i < tamanho; i++)
  {
    acumulador = acumulador + arr[i];
    cout << "A posicao [" << i << "] do array tem o valor " << arr[i] << endl;
  }

  return acumulador;
}

int main()
{
  int tam;

  cout << "Quantos valores quer armazenar? ";
  cin >> tam;

  int num[tam];

  for (int i = 0; i < tam; i++)
  {
    cout << "Digite o " << i + 1 << "o valor: ";
    cin >> num[i];
  }

  int resultado = soma(num, tam);

  cout << "A somatoria dos valores do array e: " << resultado << endl;
}