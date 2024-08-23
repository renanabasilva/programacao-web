#include <iostream>
#include <vector>
using namespace std;

// Função que retorna os elementos maiores que um valor dado
vector<int> elementosMaioresQue(const vector<int>& v, int valor) {
    vector<int> resultado;
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > valor) {
            resultado.push_back(v[i]);
        }
    }
    return resultado;
}

int main() {
    vector<int> numeros = {2, 5, 7, 3, 8, 10};
    int valor = 5;

    vector<int> maiores = elementosMaioresQue(numeros, valor); // Chama a função para encontrar elementos maiores que o valor

    cout << "Elementos maiores que " << valor << ": ";
    for (int num : maiores) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
