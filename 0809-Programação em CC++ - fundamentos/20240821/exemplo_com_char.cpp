#include <iostream>
using namespace std;

int main() {
    char nomes[3][50]; // Declara��o de uma matriz de strings (3 strings, cada uma com
                        //at� 49 caracteres cada (o �ltimo caractere � para o terminador nulo \0).

    // Armazenamento de strings na matriz
    for (int i = 0; i < 3; i++) {
        cout << "Digite o nome " << i + 1 << ": ";
        cin >> nomes[i];
    }

    // Exibi��o das strings armazenadas
    cout << "Os nomes armazenados s�o:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << nomes[i] << endl;
    }

    return 0;
}

