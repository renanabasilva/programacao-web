#include <iostream>
using namespace std;

int main() {
    char nomes[3][50]; // Declaração de uma matriz de strings (3 strings, cada uma com
                        //até 49 caracteres cada (o último caractere é para o terminador nulo \0).

    // Armazenamento de strings na matriz
    for (int i = 0; i < 3; i++) {
        cout << "Digite o nome " << i + 1 << ": ";
        cin >> nomes[i];
    }

    // Exibição das strings armazenadas
    cout << "Os nomes armazenados são:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << nomes[i] << endl;
    }

    return 0;
}

