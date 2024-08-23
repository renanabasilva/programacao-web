#include <iostream>
using namespace std;

int main() {
    string nomes[3]; // Declaração de uma matriz de strings

    // Armazenamento de strings na matriz
    for (int i = 0; i < 3; i++) {
        cout << "Digite o nome " << i + 1 << ": ";
        getline(cin,nomes[i]);
    }

    // Exibição das strings armazenadas
    cout << "Os nomes armazenados são:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << nomes[i] << endl;
    }

    return 0;
}
