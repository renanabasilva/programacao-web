#include <iostream>
#include <vector>
using namespace std;

// Fun��o que implementa o algoritmo Bubble Sort
void bubbleSort(vector<int>& v) {
    int n = v.size();
    bool trocado;

    // Loop para repetir o processo de ordena��o
    for (int i = 0; i < n - 1; i++) {
        trocado = false;  // Reseta o indicador de troca

        // Percorre o vetor at� a �ltima posi��o n�o ordenada
        for (int j = 0; j < n - i - 1; j++) {
            // Compara os elementos adjacentes
            if (v[j] > v[j + 1]) {
                // Troca os elementos se estiverem na ordem errada
                swap(v[j], v[j + 1]);
                trocado = true;  // Marca que houve uma troca
            }
        }

        // Se n�o houve trocas no loop, o vetor j� est� ordenado
        if (!trocado) {
            break;
        }
    }
}

int main() {
    // Definir um vetor de inteiros
    vector<int> numeros;
    int tamanho, valor;

    // Ler o tamanho do vetor
    cout << "Digite o numero de elementos no vetor: ";
    cin >> tamanho;

    // Ler os elementos do vetor
    cout << "Digite os elementos do vetor: ";
    for (int i = 0; i < tamanho; i++) {
        cin >> valor;
        numeros.push_back(valor);
    }

    // Exibir o vetor antes da ordena��o
    cout << "Vetor antes da ordenacao: ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    // Chamar a fun��o bubbleSort para ordenar o vetor
    bubbleSort(numeros);

    // Exibir o vetor ap�s a ordena��o
    cout << "Vetor depois da ordenacao: ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
