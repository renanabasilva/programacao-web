#include <iostream>
using namespace std;

// Fun��o que multiplica dois n�meros inteiros
int multiplica(int a, int b) {
    int resultado = a * b; // Vari�vel local
    return resultado;
}

int main() {
    int x = 5, y = 4;

    int resultado = multiplica(x, y);

    cout << "O produto de " << x << " e " << y << " �: " << resultado << endl;

    return 0;
}
