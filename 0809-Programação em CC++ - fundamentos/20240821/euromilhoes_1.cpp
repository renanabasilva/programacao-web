#include <iostream>
#include <random>
#include <ctime> // Para time()
#include <windows.h>
using namespace std;

int main() {
    // Inicializa o gerador de números aleatórios com o tempo atual
    mt19937 gen(time(0)); // Semente baseada no tempo atual

    // Define a distribuição (números inteiros entre 1 e 10)
    uniform_int_distribution<> distrib(1, 50);

    // Gera e exibe o número aleatório
    int numeroAleatorio;
    for(int i=1;i<=5;i++){
        cout << distrib(gen)<<"\t";
        Sleep(1000);
    }

    return 0;
}
