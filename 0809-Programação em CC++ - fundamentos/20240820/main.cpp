#include <iostream>
using namespace std;

extern int numero; // Declara��o de extern para a vari�vel global

void exibeNumero(); // Declara��o da fun��o extern

int main() {
    exibeNumero(); // Chama a fun��o do outro arquivo

    numero = 100; // Modifica a vari�vel global

    exibeNumero(); // Chama a fun��o novamente

    return 0;
}

