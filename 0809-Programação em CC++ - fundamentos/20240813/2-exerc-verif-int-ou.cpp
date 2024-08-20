#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicita ao usu�rio que insira um n�mero
    cout << "Digite um n�mero: ";
    cin >> numero;

    // Verifica se o n�mero est� fora do intervalo de 10 a 20
    if (numero < 10 || numero > 20) {
        cout << "O n�mero " << numero << " est� fora do intervalo de 10 a 20." << endl;
    } else {
        cout << "O n�mero " << numero << " est� dentro do intervalo de 10 a 20." << endl;
    }

    return 0;
}
