#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite um número para iniciar a contagem regressiva: ";
    cin >> numero;

    while (numero >= 0) {
        cout << numero << endl;
        numero--; // Decrementa o número
    }

    cout << "Fim da contagem regressiva!" << endl;

    return 0;
}
