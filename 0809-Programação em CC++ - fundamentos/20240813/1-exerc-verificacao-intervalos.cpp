#include <iostream>
using namespace std;

int main() {
    int temperatura;

    cout << "Digite a temperatura em Celsius: ";
    cin >> temperatura;

    if (temperatura < 0) {
        cout << "Est� congelando!" << endl;
    } else if (temperatura >= 0 && temperatura <= 15) {
        cout << "Est� frio." << endl;
    } else if (temperatura > 15 && temperatura <= 25) {
        cout << "Clima agrad�vel." << endl;
    } else if (temperatura > 25 && temperatura <= 35) {
        cout << "Est� quente." << endl;
    } else {
        cout << "Est� muito quente!" << endl;
    }

    return 0;
}

