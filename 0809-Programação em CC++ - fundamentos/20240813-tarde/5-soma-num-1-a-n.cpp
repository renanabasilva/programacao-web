#include <iostream>
using namespace std;

int main() {
    int n, i = 1, soma = 0;

    cout << "Digite um número: ";
    cin >> n;

    while (i <= n) {
        soma += i; // Adiciona i à soma
        i++; // Incrementa i
    }

    cout << "A soma dos números de 1 a " << n << " é: " << soma << endl;

    return 0;
}
