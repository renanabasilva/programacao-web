#include <iostream>
#include <vector>  // Inclui a biblioteca para vetores
using namespace std;

int main() {
    // Declaração e inicialização de um vetor de inteiros
    vector<int> numeros = {10, 20, 30, 40, 50};

    // Exibindo o tamanho do vetor
    cout << "O tamanho inicial do vetor e: " << numeros.size() << endl;

    // Acessando e exibindo elementos do vetor
    cout << "Elementos do vetor:" << endl;
    for (int i = 0; i < numeros.size(); i++) {
        cout << "numeros[" << i << "] = " << numeros[i] << endl;
    }

    // Adicionando elementos ao final do vetor usando push_back()
    numeros.push_back(60);
    numeros.push_back(70);

    // Exibindo os elementos do vetor após adicionar novos elementos
    cout << "Elementos do vetor apos push_back:" << endl;
    for (int i = 0; i < numeros.size(); i++) {
        cout << "numeros[" << i << "] = " << numeros[i] << endl;
    }

    // Removendo o último elemento usando pop_back()
    numeros.pop_back();

    // Exibindo os elementos do vetor após a remoção do último elemento
    cout << "Elementos do vetor apos pop_back:" << endl;
    for (int i = 0; i < numeros.size(); i++) {
        cout << "numeros[" << i << "] = " << numeros[i] << endl;
    }

    return 0;
}

