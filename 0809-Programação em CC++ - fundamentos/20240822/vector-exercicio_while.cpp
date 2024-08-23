#include <iostream>
#include <vector>  // Inclui a biblioteca para vetores
using namespace std;

int main() {
    // Declara��o e inicializa��o de um vetor de inteiros
    vector<int> numeros = {10, 20, 30, 40, 50};

    // Exibindo o tamanho do vetor
    cout << "O tamanho inicial do vetor e: " << numeros.size() << endl;

    // Acessando e exibindo elementos do vetor
    cout << "Elementos do vetor:" << endl;
    int i=0;
    while (i < numeros.size()) {
        cout << "numeros[" << i << "] = " << numeros[i] << endl;
        i++;
    }

    // Adicionando elementos ao final do vetor usando push_back()
    numeros.push_back(60);
    numeros.push_back(70);

    // Exibindo os elementos do vetor ap�s adicionar novos elementos
    cout << "Elementos do vetor apos push_back:" << endl;
    i=0;
    while(i < numeros.size()) {
        cout << "numeros[" << i << "] = " << numeros[i] << endl;
        i++;
    }

    // Removendo o �ltimo elemento usando pop_back()
    numeros.pop_back();

    // Exibindo os elementos do vetor ap�s a remo��o do �ltimo elemento
    cout << "Elementos do vetor apos pop_back:" << endl;
    i=0;
    while(i < numeros.size()) {
        cout << "numeros[" << i << "] = " << numeros[i] << endl;
        i++;
    }

    cout<<numeros.at(4);
    return 0;
}

