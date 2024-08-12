#include <iostream> // Biblioteca de entrada e saída
using namespace std;
// Declaração de função

void saudacao(string nome) {
    cout << "Olá "<<nome<<" bem-vindo ao programa!" << endl;
}

int soma(int a, int b) {
    return a + b;
}

int main() {
    saudacao("Luis"); // Chamada da função saudacao

    int x, y;
    cout << "Digite dois numeros: ";
    cin >> x >> y;
    cout << "x="<<x<<endl;
    cout << "y="<<y<<endl;

    int resultado = soma(x, y);
    cout << "A soma dos numeros é: " << resultado << endl;

    if (resultado > 10) {
        cout << "A soma e maior que 10" << endl;
    } else {
        cout << "A soma e menor que 10 " << endl;
    }

    for (int i = 0; i < 3; i++) {
        cout << "Iteracao: " << i << endl;//enesima vez que o ciclo é executado
    }

    return 0;
}
