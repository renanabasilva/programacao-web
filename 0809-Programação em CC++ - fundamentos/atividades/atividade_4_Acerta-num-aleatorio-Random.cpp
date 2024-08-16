// Peçam um numero ao utilizador e verifiquem uma de 3 condições:
// Se acertou no numero aleatório
// Se ficou abaixo do numero aleatório
// Se ficou acima do numero aleatório

#include <iostream>
#include <random> // Para geradores de números aleatórios avançados
using namespace std;

int main()
{
  // Inicializa o gerador de números aleatórios com uma semente
  random_device rd;
  mt19937 gen(rd());

  // Define a distribuição (números inteiros entre 1 e 10)
  uniform_int_distribution<> distrib(1, 10);

  // Gera e exibe o número aleatório

  int numeroAleatorio = distrib(gen), palpite;

  cout << "Digite um numero entre 1 e 10 para tentar adivinhar: ";
  cin >> palpite;

  if (palpite == numeroAleatorio) {
    cout << "Parabens, voce acertou o numero escolhido: " << palpite << "!!!" << endl;
  } else if (palpite < numeroAleatorio) {
    cout << "O numero escolhido " << palpite << " e menor que o numero sorteado: " << numeroAleatorio << endl;
  } else {
    cout << "O numero escolhido " << palpite << " e maior que o numero sorteado: " << numeroAleatorio << endl;
  }

  return 0;
}