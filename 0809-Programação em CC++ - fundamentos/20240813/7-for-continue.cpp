#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; // Pula n�meros pares
        }

        cout << i << " "; // Exibe apenas n�meros �mpares
    }
    cout << endl;

    return 0;
}
