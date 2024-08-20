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

    int transposta[colunas][linhas];

    // Realiza a transposição
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    // Exibe a matriz transposta
    cout << "Matriz transposta:" << endl;
    for (int i = 0; i < colunas; i++) {
        for (int j = 0; j < linhas; j++) {
            cout << transposta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
