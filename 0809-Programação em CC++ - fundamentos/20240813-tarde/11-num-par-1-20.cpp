#include <iostream>
using namespace std;

int main() {
    cout << "Números pares de 1 a 20:" << endl;

    for (int i = 2; i <= 20; i+=2) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
