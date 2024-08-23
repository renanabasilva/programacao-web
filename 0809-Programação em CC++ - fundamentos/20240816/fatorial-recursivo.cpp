#include <iostream>
using namespace std;

// Função recursiva para calcular o fatorial de um número
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

    cout << "O fatorial de " << numero << " é: " << resultado << endl;

    return 0;
}
