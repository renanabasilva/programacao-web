#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <ctime>

using namespace std;

int main() {
    // Inicializa o gerador de números aleatórios com a semente baseada no tempo
    mt19937 rng(time(0));

    // Vetor para armazenar os números principais (1 a 50)
    vector<int> numerosPrincipais;
    for (int i = 1; i <= 50; i++) {
        numerosPrincipais.push_back(i);
    }

    // Embaralhar os números
    shuffle(numerosPrincipais.begin(), numerosPrincipais.end(), rng);

    for(int i=0;i<50;i++){
        cout<<numerosPrincipais[i]<<"\t";
    }

    // Selecionar os primeiros 5 números como os números principais
    cout << "Números principais: ";
    for (int i = 0; i < 5; i++) {
        cout << numerosPrincipais[i] << " ";
    }
    cout << endl;

    // Vetor para armazenar as estrelas (1 a 12)
    vector<int> estrelas;
    for (int i = 1; i <= 12; i++) {
        estrelas.push_back(i);
    }

    // Embaralhar as estrelas
    shuffle(estrelas.begin(), estrelas.end(), rng);
    cout<<endl;
    for(int i=0;i<12;i++){
        cout<<estrelas[i]<<"\t";
    }
    // Selecionar as primeiras 2 estrelas
    cout << "Estrelas: ";
    for (int i = 0; i < 2; i++) {
        cout << estrelas[i] << " ";
    }
    cout << endl;

    return 0;
}
