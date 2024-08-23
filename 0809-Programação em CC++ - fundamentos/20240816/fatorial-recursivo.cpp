#include <iostream>
using namespace std;

// Fun��o recursiva para calcular o fatorial de um n�mero
int fatorial(int n) {
    if (n <= 1) {
        return 1; // Caso base
    } else {
        return n * fatorial(n - 1); // Chamada recursiva
    }
}

int main() {
    int numero = 5;

    int resultado = fatorial(numero);

    cout << "O fatorial de " << numero << " �: " << resultado << endl;

    return 0;
}
