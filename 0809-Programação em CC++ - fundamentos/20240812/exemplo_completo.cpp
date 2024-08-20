#include <iostream>
#include <cstdio>
#include <conio.h>
using namespace std;

#define PI 3.14159
#define AREA_DO_CIRCULO(r) (PI * (r) * (r))

// Função para calcular a soma de dois inteiros
int soma(int a, int b) {
    return a + b;
}

int main() {
    // Uso da diretiva #define
    double raio = 5.0;
    cout << "Área do círculo com raio " << raio << " é: " << AREA_DO_CIRCULO(raio) << endl;

    // Uso da função soma
    int resultado = soma(7, 3);
    cout << "Resultado da soma: " << resultado << endl;

    // Uso de getchar() e putchar()
    char c;
    cout << "Digite um caractere: ";
    c = getchar();
    cout << "Você digitou: ";
    putchar(c);
    cout << endl;

    // Uso de getche() e getch()
    cout << "Digite um caractere (getche): ";
    c = getche();
    cout << "\nVocê digitou: " << c << endl;

    cout << "Digite outro caractere (getch): ";
    c = getch();
    cout << "\nVocê digitou: " << c << endl;

    return 0;
}
