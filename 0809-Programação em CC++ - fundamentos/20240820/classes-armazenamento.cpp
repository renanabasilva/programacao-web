#include <iostream>
using namespace std;

// Fun��o que usa uma vari�vel est�tica
void contador() {
    static int count = 0; // Vari�vel est�tica
    count++;
    cout << "Contador: " << count << endl;
}

int main() {
    contador(); // Chamada 1
    contador(); // Chamada 2
    contador(); // Chamada 3

    return 0;
}
