#include <iostream>
using namespace std;

int main() {
    string nome; // Declara��o de uma vari�vel string

    cout << "Digite seu nome: ";
    getline(cin,nome);//le do utilizador incluindo espa�os

    cout << "Ol�, " << nome << "!" << endl;

    return 0;
}
