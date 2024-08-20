#include <iostream>
#include <random> // Para geradores de números aleatórios avançados
using namespace std;

int main() {
    // Inicializa o gerador de números aleatórios com uma semente
    random_device rd;
    mt19937 gen(rd());

    // Define a distribuição (números inteiros entre 1 e 100)
    uniform_int_distribution<> distrib(1, 100);

    // Gera e exibe o número aleatório
    int numeroAleatorio = distrib(gen);
    cout << "Número aleatório entre 1 e 100: " << numeroAleatorio << endl;

    return 0;
}
