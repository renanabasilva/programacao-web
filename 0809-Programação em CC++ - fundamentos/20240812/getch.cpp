#include <iostream>
#include <conio.h> // Necessário para getche() e getch()
using namespace std;

int main() {
    char c;

    cout << "Digite um caractere (getche): ";
    c = getche(); // Lê e exibe o caractere
    cout << "\nVocê digitou: " << c << endl;

    cout << "Digite outro caractere (getch): ";
    c = getch(); // Lê o caractere sem exibir
    cout << "\nVocê digitou: " << c << endl;

    return 0;
}
