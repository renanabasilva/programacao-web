#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numeros = {10, 20, 30, 40, 50};

    // Removendo o segundo elemento (�ndice 1)
    numeros.erase(numeros.begin()+3);
    numeros.erase(numeros.end());

    // Exibindo os elementos do vetor ap�s a remo��o
    for (int i = 0; i < numeros.size(); i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
