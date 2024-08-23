#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros;

    // Inserindo elementos no vetor

    for (int i = 1; i <= 5; i++) {
        numeros.push_back(i * 10); // Adiciona 10, 20, 30, 40, 50
    }

    // Exibindo os elementos do vetor
    for (int i = 0; i < numeros.size(); i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
