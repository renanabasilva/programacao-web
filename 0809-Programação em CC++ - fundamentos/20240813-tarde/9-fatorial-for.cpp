#include <iostream>
using namespace std;

int main() {
    int numero;
    long long fatorial = 1; // Usando long long para suportar grandes n�meros

    cout << "Digite um n�mero para calcular o fatorial: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++) {
        fatorial *= i; // Multiplica fatorial por i
    }

    cout << "O fatorial de " << numero << " �: " << fatorial << endl;

    return 0;
}
