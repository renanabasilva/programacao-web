#include <iostream>
using namespace std;

int main() {
    int n, i = 1, soma = 0;

    cout << "Digite um n�mero: ";
    cin >> n;

    while (i <= n) {
        soma += i; // Adiciona i � soma
        i++; // Incrementa i
    }

    cout << "A soma dos n�meros de 1 a " << n << " �: " << soma << endl;

    return 0;
}
