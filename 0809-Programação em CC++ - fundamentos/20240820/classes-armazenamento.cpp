#include <iostream>
using namespace std;

// Função que usa uma variável estática
void contador() {
    static int count = 0; // Variável estática
    count++;
    cout << "Contador: " << count << endl;
}

int main() {
    contador(); // Chamada 1
    contador(); // Chamada 2
    contador(); // Chamada 3

    return 0;
}
