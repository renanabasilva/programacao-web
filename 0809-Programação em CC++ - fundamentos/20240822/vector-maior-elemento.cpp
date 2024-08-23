#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "Digite a quantidade de numeros: ";
    cin >> n;

    vector<int> numeros(n); // Declaração do vetor com tamanho n

    // Leitura dos elementos do vetor
    cout << "Digite os " << n << " numeros: ";
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    int maior = numeros[0]; // Inicializa com o primeiro elemento

    // Encontra o maior elemento
    for (int i = 1; i < n; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
    }

    cout << "O maior elemento do vetor e: " << maior << endl;

    return 0;
}
