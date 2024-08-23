#include <iostream>
#include <vector>
using namespace std;

void adicionarElemento(vector<int>& v, int elemento) {
    v.push_back(elemento); // Adiciona o elemento ao vetor
}

int main() {
    vector<int> numeros = {1, 2, 3, 4, 5};
    adicionarElemento(numeros, 6); // Passagem por referência
    // Exibe o vetor modificado
    for (int i = 0; i < numeros.size(); i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;
    return 0;
}

