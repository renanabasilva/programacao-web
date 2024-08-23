#include <iostream>
using namespace std;

void exibirArray(int arr[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int numeros[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]); // Calcula o tamanho do array
    exibirArray(numeros, tamanho); // Passa o array e seu tamanho para a função
    return 0;
}
