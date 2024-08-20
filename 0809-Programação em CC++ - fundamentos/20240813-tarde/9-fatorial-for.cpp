#include <iostream>
using namespace std;

int main() {
    int numero;
    long long fatorial = 1; // Usando long long para suportar grandes números

    cout << "Digite um número para calcular o fatorial: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++) {
        fatorial *= i; // Multiplica fatorial por i
    }

    cout << "O fatorial de " << numero << " é: " << fatorial << endl;

    return 0;
}
