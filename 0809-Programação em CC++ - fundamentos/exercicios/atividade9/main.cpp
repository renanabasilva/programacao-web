#include <iostream>
// #include "auxiliar.h"
using namespace std;

extern int numero; // Declaração de extern para a variável global

int finaliza;

void exibeNumero(); // Declaração da função extern

int main()
{
  exibeNumero(); // Chama a função do outro arquivo

  numero = 100; // Modifica a variável global

  exibeNumero(); // Chama a função novamente

  return 0;
}

// g++ main.cpp auxiliar.cpp -o main.exe - Código no console para gerar o executável
