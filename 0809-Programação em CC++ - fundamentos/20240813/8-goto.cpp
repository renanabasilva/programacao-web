#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Digite um n�mero positivo: ";
    cin >> num;

    if (num < 0) {
        goto erro; // Transfere o controle para o r�tulo erro
    }

    cout << "Voc� digitou: " << num << endl;
    return 0;

erro:
    cout << "Erro: n�mero negativo n�o permitido!" << endl;
    return 1;
}
