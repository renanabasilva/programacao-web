#include <iostream>
using namespace std;

int main() {
    int i = 1;

    do {
        cout << "N�mero: " << i << endl;
        i++; // Incrementa i para evitar um loop infinito
    } while (i <= 5);

    return 0;
}
