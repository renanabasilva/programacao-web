#include<iostream>
using namespace std;
// Declaração da função
int soma(int a, int b) {
    return a + b;
}
int subtracao(int a, int b){
    return a - b;
}

int main() {
    int resultadosoma = soma(5, 3);
    int resultadosubtracao = subtracao(3, 5);
    cout << "Resultado da soma: " << resultadosoma << endl;
    cout << "Resultado da subtracao: " << resultadosubtracao << endl;

    return 0;
}

