#include <iostream>
#include <cstdio> // Necessário para getchar() e putchar()
using namespace std;

int main() {
    char c;

    cout << "Digite um caractere: ";
    c = getchar(); // Lê um caractere
    cout << "Você digitou: ";
    putchar(c); // Exibe o caractere
    cout << endl;

    return 0;
}
