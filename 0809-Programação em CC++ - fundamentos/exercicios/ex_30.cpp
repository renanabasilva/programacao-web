#include <iostream>
using namespace std;

int main() {
  string nome;

  cout << "Digite seu nome: ";
  getline(cin, nome);

  cout << endl << "seu nome: " << nome;
  
  return 0;
}