#include <iostream>
using namespace std;

// Função que multiplica dois números inteiros
int multiplica(int a, int b) {
    int resultado = a * b; // Variável local
    return resultado;
}

int main() {
    int x = 5, y = 4;

    int resultado = multiplica(x, y);

    cout << "O produto de " << x << " e " << y << " é: " << resultado << endl;

    return 0;
}
