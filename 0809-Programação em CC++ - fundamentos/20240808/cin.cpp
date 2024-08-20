#include <iostream>
using namespace std;

int main() {
    int idade;
    double salario;
    char inicial;
    string nome;

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Digite seu salário: ";
    cin >> salario;

    cout << "Digite sua inicial: ";
    cin >> inicial;

    cout << "Digite seu nome: ";
    cin >> nome; // Note que isso só lê uma palavra (até o primeiro espaço)

    cout << "Idade: " << idade << endl;
    cout << "Salário: " << salario << endl;
    cout << "Inicial: " << inicial << endl;
    cout << "Nome: " << nome << endl;

    return 0;
}
