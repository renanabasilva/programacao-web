#include <iostream>
#include <string>
using namespace std;

int main() {
    const string saudacao = "Bem-vindo ao Programa de Strings!";
    cout << saudacao << endl;

    string nomeCompleto;
    cout << "Digite seu nome completo: ";
    getline(cin, nomeCompleto);

    cout << "Ola, " << nomeCompleto << "!" << endl;

    string nomes[3];
    for (int i = 0; i < 3; i++) {
        cout << "Digite o nome " << i + 1 << ": ";
        getline(cin, nomes[i]);
    }

    cout << "Os nomes armazenados são:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << nomes[i] << endl;
    }

    return 0;
}
