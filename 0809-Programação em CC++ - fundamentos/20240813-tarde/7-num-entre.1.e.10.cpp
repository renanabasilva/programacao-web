#include <iostream>
using namespace std;

int main() {
    int numero;

    do {
        cout << "Digite um número entre 1 e 10: ";
        cin >> numero;

        if (numero < 1 || numero > 10) {
            cout << "Número inválido. Tente novamente." << endl;
        }

    } while (numero < 1 || numero > 10);

    cout << "Você digitou um número válido: " << numero << endl;

    return 0;
}
