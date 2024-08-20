#include <iostream>
#include <cstring>
using namespace std;

int main() {
    // Declaração de variáveis
    char str[] = "Programação em C++";
    int numero = 42;

    // Calculando o comprimento da string
    size_t comprimento = strlen(str);

    // Usando o operador de endereço
    int *ponteiroNumero = &numero;

    // Saída dos resultados
    cout << "String: " << str << endl;
    cout << "Comprimento da string: " << comprimento << endl;
    cout << "Valor de numero: " << numero << endl;
    cout << "Endereço de numero: " << &numero << endl;
    cout << "Valor do ponteiro (endereço de numero): " << ponteiroNumero << endl;
    cout << "Valor apontado pelo ponteiro: " << *ponteiroNumero << endl;

    return 0;
}
