#include <iostream>
using namespace std;

// Declara��o e defini��o da fun��o
//int soma(int a, int b);

int main() {
    int resultado = soma(5, 3);
    cout << "Resultado da soma: " << resultado << endl;
    return 0;
}

int soma(int a, int b){
    return a + b;
}
