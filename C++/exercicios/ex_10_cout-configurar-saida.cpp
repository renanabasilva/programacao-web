//Ajustando a largura da coluna (setW)
//O manipulador setW ajusta a largura do campo de saída.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int idade = 25;
  double salario = 4500.50;

  cout << setw(10) << "Idade:" << setw(10) << "Salario" << endl;
  cout << setw(10) << idade << setw(10) << salario << endl;
}