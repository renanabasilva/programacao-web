#include <iostream> // Biblioteca de entrada e sa�da
using namespace std;
// Declara��o de fun��o

void saudacao(string nome) {
    cout << "Ol� "<<nome<<" bem-vindo ao programa!" << endl;
}

int soma(int a, int b) {
    return a + b;
}

int main() {
    saudacao("Luis"); // Chamada da fun��o saudacao

    int x, y;
    cout << "Digite dois numeros: ";
    cin >> x >> y;
    cout << "x="<<x<<endl;
    cout << "y="<<y<<endl;

    int resultado = soma(x, y);
    cout << "A soma dos numeros �: " << resultado << endl;

    if (resultado > 10) {
        cout << "A soma e maior que 10" << endl;
    } else {
        cout << "A soma e menor que 10 " << endl;
    }

    for (int i = 0; i < 3; i++) {
        cout << "Iteracao: " << i << endl;//enesima vez que o ciclo � executado
    }

    return 0;
}
