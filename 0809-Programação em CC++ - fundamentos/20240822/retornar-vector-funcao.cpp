#include <iostream>
#include <vector>
using namespace std;

vector<int> criarVetor(int tamanho) {
    vector<int> v;
    for (int i = 1; i <= tamanho; i++) {
        v.push_back(i * 10); // Adiciona múltiplos de 10
    }
    return v; // Retorna o vetor
}

int main() {
    vector<int> numeros = criarVetor(5); // Cria um vetor com 5 elementos
    for (int i = 0; i < numeros.size(); i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;
    return 0;
}
