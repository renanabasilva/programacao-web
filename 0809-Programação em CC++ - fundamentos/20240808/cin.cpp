#include <iostream>
using namespace std;

int main() {
    int idade;
    double salario;
    char inicial;
    string nome;

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Digite seu sal�rio: ";
    cin >> salario;

    cout << "Digite sua inicial: ";
    cin >> inicial;

    cout << "Digite seu nome: ";
    cin >> nome; // Note que isso s� l� uma palavra (at� o primeiro espa�o)

    cout << "Idade: " << idade << endl;
    cout << "Sal�rio: " << salario << endl;
    cout << "Inicial: " << inicial << endl;
    cout << "Nome: " << nome << endl;

    return 0;
}
