#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, soma = 0;

    cout << "Digite a quantidade de numeros: ";
    cin >> n;

    vector<int> numeros(n); // Declaração do vetor com tamanho n

    // Leitura dos elementos do vetor
    cout << "Digite os " << n << " numeros: ";
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    // Soma dos elementos do vetor
    for (int i = 0; i < n; i++) {
        soma += numeros[i];
    }

    cout << "A soma dos elementos do vetor e: " << soma << endl;

    return 0;
}
