#include <iostream>
using namespace std;

int main() {
    const int linhas = 3;
    const int colunas = 3;
    int matriz[linhas][colunas] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int valor, encontrado = 0;

    cout << "Digite o valor a ser procurado: ";
    cin >> valor;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (matriz[i][j] == valor) {
                cout << "Valor encontrado na posição (" << i << ", " << j << ")." << endl;
                encontrado = 1;
                break; // Interrompe o loop interno
            }
        }
        if (encontrado) {
            break; // Interrompe o loop externo se o valor for encontrado
        }
    }

    if (!encontrado) {
        cout << "Valor não encontrado na matriz." << endl;
    }

    return 0;
}
