#include <iostream>
#include <conio.h> // Necess�rio para getche() e getch()
using namespace std;

int main() {
    char c;

    cout << "Digite um caractere (getche): ";
    c = getche(); // L� e exibe o caractere
    cout << "\nVoc� digitou: " << c << endl;

    cout << "Digite outro caractere (getch): ";
    c = getch(); // L� o caractere sem exibir
    cout << "\nVoc� digitou: " << c << endl;

    return 0;
}
