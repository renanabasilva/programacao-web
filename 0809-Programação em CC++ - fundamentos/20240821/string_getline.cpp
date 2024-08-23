#include <iostream>
using namespace std;

int main() {
    string nome; // Declaração de uma variável string

    cout << "Digite seu nome: ";
    getline(cin,nome);//le do utilizador incluindo espaços

    cout << "Olá, " << nome << "!" << endl;

    return 0;
}
