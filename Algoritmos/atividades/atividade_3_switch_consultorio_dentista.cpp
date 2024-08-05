//menu de um consultorio de dentista - quem conseguir faça tambem com o if else if else
//opções são:
/*
	1-RX
	2-Arrancar
	3-Tratar
	4-Limpar
*/

#include <iostream>

using namespace std;

int main()
{
  int opcao;

  cout << "------- Bem Vindo -------\n";
  cout << "----Escolha uma opcao----\n\n";
  cout << "1 - RX \t 2 - Arrancar\n";
  cout << "3 - Tratar \t 4 - Limpar\n\n";
  cout<< "Digite a opcao desejada: ";
  cin >> opcao;
  cout<< "Opcao selecionada: ";
  switch (opcao)
  {
  case 1:
    cout << "RX";
    break;
  case 2:
    cout << "Arrancar";
    break;
  case 3:
    cout << "Tratar";
    break;
  case 4:
    cout << "Limpar";
    break;
  default:
    cout << "Opcao invalida";
  }
}