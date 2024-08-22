#include <iostream>
using namespace std;

extern int numero; // Declaração de extern para a variável global

void exibeNumero(); // Declaração da função extern

int main() {
    exibeNumero(); // Chama a função do outro arquivo

    numero = 100; // Modifica a variável global

    exibeNumero(); // Chama a função novamente

    return 0;
}

