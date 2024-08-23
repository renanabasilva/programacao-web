#include <iostream>
#include <vector>
using namespace std;

void exibirVetor(const vector<int>& v) {
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main() {
    vector<int> numeros = {1, 2, 3, 4, 5};
    exibirVetor(numeros); // Passagem por referência
    return 0;
}

