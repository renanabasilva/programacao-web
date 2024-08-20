#include <iostream>
using namespace std;

int main() {
    // Usando while
    int i = 1;
    cout << "Usando while:" << endl;
    while (i <= 5) {
        cout << i << " ";
        i++;
    }
    cout << endl;

    // Usando for
    cout << "Usando for:" << endl;
    for (int j = 1; j <= 5; j++) {
        cout << j << " ";
    }
    cout << endl;

    // Usando do while
    int k = 1;
    cout << "Usando do while:" << endl;
    do {
        cout << k << " ";
        k++;
    } while (k <= 5);
    cout << endl;

    return 0;
}

