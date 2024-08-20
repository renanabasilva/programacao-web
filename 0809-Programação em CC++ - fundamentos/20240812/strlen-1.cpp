#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // Declara��o de vari�veis
    char str[] = "Programa��o em C++";
    int numero = 42;

    // Calculando o comprimento da string
    size_t comprimento = strlen(str);

    // Usando o operador de endere�o
    int *ponteiroNumero = &numero;

    // Sa�da dos resultados
    cout << "String: " << str << endl;
    cout << "Comprimento da string: " << comprimento << endl;
    cout << "Valor de numero: " << numero << endl;
    cout << "Endere�o de numero: " << &numero << endl;
    cout << "Valor do ponteiro (endere�o de numero): " << ponteiroNumero << endl;
    cout << "Valor apontado pelo ponteiro: " << *ponteiroNumero << endl;

    return 0;
}
