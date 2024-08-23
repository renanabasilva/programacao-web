#include <iostream>
#include <vector>
using namespace std;

// Função que inverte os elementos do vetor
void inverterVetor(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n / 2; i++) {
        swap(v[i], v[n - i - 1]); // Troca o elemento na posição i com o elemento na posição n-i-1
        cout << v[i]<<"-"<<v[n - i - 1]<<endl;
    }
}

int main() {
    vector<int> numeros = {1, 2, 3, 4, 5};
    cout << "Vetor original: ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    inverterVetor(numeros); // Chama a função para inverter o vetor

    cout << "Vetor invertido: ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
