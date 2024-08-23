#include <iostream>
using namespace std;

// Função que calcula a soma dos elementos de uma matriz unidimensional
int soma(int arr[], int tamanho) {
    int total = 0;
    for (int i = 0; i < tamanho; i++) {
        total = total + arr[i];
        cout << "total=" <<total<<endl;
    }
    return total;
}

int main() {
    int numeros[5] = {1, 2, 3, 4, 5};
    int resultado = soma(numeros, 5); // Passa a matriz e o tamanho como argumentos

    cout << "A soma dos elementos e: " << resultado << endl;

    return 0;
}
