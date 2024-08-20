#include <iostream>
using namespace std;

// Função que soma dois números inteiros
int soma(int a, int b) {
    int resultado = a + b; // Calcula a soma
    return resultado; // Retorna o resultado
}

int main() {
    int x = 5, y = 10;

    // Chama a função soma e armazena o resultado
    int resultado = soma(x, y);

    // Exibe o resultado
    cout << "A soma de " << x << " e " << y << " é: " << resultado << endl;

    return 0;
}
