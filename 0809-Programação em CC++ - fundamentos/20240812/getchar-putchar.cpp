#include <iostream>
#include <cstdio> // Necess�rio para getchar() e putchar()
using namespace std;

int main() {
    char c;

    cout << "Digite um caractere: ";
    c = getchar(); // L� um caractere
    cout << "Voc� digitou: ";
    putchar(c); // Exibe o caractere
    cout << endl;

    return 0;
}
