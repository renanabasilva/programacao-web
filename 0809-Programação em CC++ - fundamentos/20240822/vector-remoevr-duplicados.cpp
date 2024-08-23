#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Função que remove duplicatas de um vetor
void removerDuplicatas(vector<int>& v) {
    sort(v.begin(), v.end()); // Ordena o vetor
    auto last = unique(v.begin(), v.end()); // Remove duplicatas
    v.erase(last, v.end()); // Remove os elementos além do novo final do vetor
}

int main() {
    vector<int> numeros = {5, 3, 8, 5, 3, 7, 8, 2};

    cout << "Vetor original: ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    removerDuplicatas(numeros); // Chama a função para remover duplicatas

    cout << "Vetor sem duplicatas: ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
