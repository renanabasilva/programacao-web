#include <iostream>
using namespace std;

// Fun��o que soma dois n�meros inteiros
int soma(int a, int b) {
    int resultado = a + b; // Calcula a soma
    return resultado; // Retorna o resultado
}

int main() {
    int x = 5, y = 10;

    // Chama a fun��o soma e armazena o resultado
    int resultado = soma(x, y);

    // Exibe o resultado
    cout << "A soma de " << x << " e " << y << " �: " << resultado << endl;

    return 0;
}
