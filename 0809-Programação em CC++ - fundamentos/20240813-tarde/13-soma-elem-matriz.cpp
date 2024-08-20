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

    int soma = 0;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            soma += matriz[i][j]; // Soma cada elemento
        }
    }

    cout << "A soma de todos os elementos da matriz é: " << soma << endl;
    return 0;
}
