#include <iostream>
#include <random> // Para geradores de n�meros aleat�rios avan�ados
using namespace std;

int main() {
    // Inicializa o gerador de n�meros aleat�rios com uma semente
    random_device rd;
    mt19937 gen(rd());

    // Define a distribui��o (n�meros inteiros entre 1 e 100)
    uniform_int_distribution<> distrib(1, 100);

    // Gera e exibe o n�mero aleat�rio
    int numeroAleatorio = distrib(gen);
    cout << "N�mero aleat�rio entre 1 e 100: " << numeroAleatorio << endl;

    return 0;
}
