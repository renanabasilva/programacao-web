#include <iostream>
#include <limits> // Necess�rio para numeric_limits
using namespace std;

int main() {
    int idade;

    cout << "Digite sua idade: ";
    cin >> idade;

    // Verifica se a entrada falhou
    if (cin.fail()) {
        cin.clear(); // Limpa o estado de erro
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora a entrada incorreta
        cout << "Entrada inv�lida. Por favor, digite um n�mero inteiro." << endl;
    } else {
        cout << "Sua idade �: " << idade << endl;
    }

    return 0;
}
