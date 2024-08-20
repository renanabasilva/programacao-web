#include <iostream>
#include <limits> // Necessário para numeric_limits
using namespace std;

int main() {
    int idade;

    cout << "Digite sua idade: ";
    cin >> idade;

    // Verifica se a entrada falhou
    if (cin.fail()) {
        cin.clear(); // Limpa o estado de erro
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora a entrada incorreta
        cout << "Entrada inválida. Por favor, digite um número inteiro." << endl;
    } else {
        cout << "Sua idade é: " << idade << endl;
    }

    return 0;
}
