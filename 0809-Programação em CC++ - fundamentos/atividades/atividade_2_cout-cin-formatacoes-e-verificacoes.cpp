#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main(){
//dados a pedir ao utilizador
string nomeCompleto;
int idade;
double salario;
char p_letra_n;

//lendo nome completo
cout << "Digite seu nome completo: ";
getline(cin, nomeCompleto);

//lendo idade
cout << "Digite sua idade: ";
cin >> idade;

//verifica entrada idade
if (cin.fail()) {
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  cout << "Entrada invalida para idade. Por favor, digite um numero inteiro." << endl;
  return 1;
}

//lendo salario
cout << "Digite seu salario: ";
cin >> salario;

if(cin.fail()) {
  cin.clear();
  cin.ignore(numeric_limits<streamsize>::max(), '\n');
  cout << "Entrada invalida para salario. Por favor, digite um valor correto." << endl;
  return 1;  
}

//passando inicial
p_letra_n = nomeCompleto[0];

//Imprimindo os dados formatados
cout << fixed << showpoint;
cout << setprecision(2);

cout << left << setw(15) << "Nome Completo" << ": " << nomeCompleto << endl;
cout << left << setw(15) << "Idade" << ": " << idade << endl;
cout << left << setw(15) << "Salario" << ": " << salario << endl;
cout << left << setw(15) << "Inicial" << ": " << p_letra_n << endl;
return 0;
}