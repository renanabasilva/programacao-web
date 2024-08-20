#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
    int idade;
    double salario;
    char inicial;
    string nomeCompleto;

    // Lendo idade
    cout << "Digite sua idade: ";
    cin >> idade;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida para idade. Por favor, digite um número inteiro." << endl;
        return 1;
    }

    // Lendo salário
    cout << "Digite seu salário: ";
    cin >> salario;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida para salário. Por favor, digite um número decimal." << endl;
        return 1;
    }

    // Lendo inicial
    cout << "Digite sua inicial: ";
    cin >> inicial;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada inválida para inicial. Por favor, digite um único caractere." << endl;
        return 1;
    }

    // Lendo nome completo
    cout << "Digite seu nome completo: ";
    cin.ignore(); // Ignora o caractere de nova linha pendente
    getline(cin, nomeCompleto);

    // Exibindo os dados formatados
    cout << fixed << showpoint;
    cout << setprecision(2);

    cout << left << setw(15) << "Idade" << ": " << idade << endl;
    cout << left << setw(15) << "Salário" << ": " << salario << endl;
    cout << left << setw(15) << "Inicial" << ": " << inicial << endl;
    cout << left << setw(15) << "Nome Completo" << ": " << nomeCompleto << endl;

    return 0;
}
