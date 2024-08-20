#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicita ao usuário que insira um número
    cout << "Digite um número: ";
    cin >> numero;

    // Verifica se o número está fora do intervalo de 10 a 20
    if (numero < 10 || numero > 20) {
        cout << "O número " << numero << " está fora do intervalo de 10 a 20." << endl;
    } else {
        cout << "O número " << numero << " está dentro do intervalo de 10 a 20." << endl;
    }

    return 0;
}
