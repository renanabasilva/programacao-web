#include <iostream>
#include <random> // Para geradores de números aleatórios avançados
using namespace std;

int main() {
    // Inicializa o gerador de números aleatórios com uma semente
    //random_device: Usado para inicializar o gerador com uma semente aleatória (potencialmente do hardware).
    random_device rd;
    //mt19937: Um gerador de números aleatórios Mersenne Twister, muito eficiente e com boas propriedades estatísticas.
    mt19937 gen(rd());

    // Define a distribuição (números inteiros entre 1 e 100)
    //uniform_int_distribution<>: Define a distribuição dos números aleatórios gerados, neste caso, números inteiros uniformemente distribuídos entre 1 e 100.
    uniform_int_distribution<> distrib(1, 10);

    // Gera e exibe o número aleatório

    int numeroAleatorio = distrib(gen);
    cout << "Número aleatório entre 1 e 10: " << numeroAleatorio << endl;

    return 0;
}
