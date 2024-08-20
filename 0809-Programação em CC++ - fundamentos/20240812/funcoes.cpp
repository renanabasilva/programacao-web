#include <iostream>
using namespace std;

// Declaração e definição da função
//int soma(int a, int b);

int main() {
    int resultado = soma(5, 3);
    cout << "Resultado da soma: " << resultado << endl;
    return 0;
}

int soma(int a, int b){
    return a + b;
}
