#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Digite um número positivo: ";
    cin >> num;

    if (num < 0) {
        goto erro; // Transfere o controle para o rótulo erro
    }

    cout << "Você digitou: " << num << endl;
    return 0;

erro:
    cout << "Erro: número negativo não permitido!" << endl;
    return 1;
}
