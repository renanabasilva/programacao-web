#include <iostream>
#include <limits>
#include <string>
using namespace std;

int main() {
    string nome;
    int idade;

    // Leitura da string
    cout << "Digite seu nome completo: ";
    getline(cin, nome);

    // Verificação se a entrada falhou
    if (cin.fail()) {
        cin.clear(); // Limpa o estado de erro
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora a entrada incorreta
        cout << "Erro ao ler o nome. Por favor, tente novamente." << endl;
    } else {
        cout << "Olá, " << nome << "!" << endl;
    }

    // Leitura do número inteiro
    cout << "Digite sua idade: ";
    cin >> idade;

    // Verificação se a entrada falhou
    if (cin.fail()) {
        cin.clear(); // Limpa o estado de erro
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora a entrada incorreta
        cout << "Entrada inválida. Por favor, digite um número inteiro." << endl;
    } else {
        cout << "Sua idade é: " << idade << endl;
    }

    return 0;
}
