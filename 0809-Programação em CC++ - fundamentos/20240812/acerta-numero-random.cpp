#include <iostream>
#include <random> // Para geradores de n�meros aleat�rios avan�ados
using namespace std;

int main() {
    // Inicializa o gerador de n�meros aleat�rios com uma semente
    //random_device: Usado para inicializar o gerador com uma semente aleat�ria (potencialmente do hardware).
    random_device rd;
    //mt19937: Um gerador de n�meros aleat�rios Mersenne Twister, muito eficiente e com boas propriedades estat�sticas.
    mt19937 gen(rd());

    // Define a distribui��o (n�meros inteiros entre 1 e 100)
    //uniform_int_distribution<>: Define a distribui��o dos n�meros aleat�rios gerados, neste caso, n�meros inteiros uniformemente distribu�dos entre 1 e 100.
    uniform_int_distribution<> distrib(1, 10);

    // Gera e exibe o n�mero aleat�rio

    int numeroAleatorio = distrib(gen);
    cout << "N�mero aleat�rio entre 1 e 10: " << numeroAleatorio << endl;

    return 0;
}
