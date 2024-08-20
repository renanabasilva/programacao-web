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

    // Verifica��o se a entrada falhou
    if (cin.fail()) {
        cin.clear(); // Limpa o estado de erro
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora a entrada incorreta
        cout << "Erro ao ler o nome. Por favor, tente novamente." << endl;
    } else {
        cout << "Ol�, " << nome << "!" << endl;
    }

    // Leitura do n�mero inteiro
    cout << "Digite sua idade: ";
    cin >> idade;

    // Verifica��o se a entrada falhou
    if (cin.fail()) {
        cin.clear(); // Limpa o estado de erro
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora a entrada incorreta
        cout << "Entrada inv�lida. Por favor, digite um n�mero inteiro." << endl;
    } else {
        cout << "Sua idade �: " << idade << endl;
    }

    return 0;
}
