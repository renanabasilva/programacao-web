#include <iostream>
using namespace std;

int main() {
    int temperatura;

    cout << "Digite a temperatura em Celsius: ";
    cin >> temperatura;

    if (temperatura < 0) {
        cout << "Está congelando!" << endl;
    } else if (temperatura >= 0 && temperatura <= 15) {
        cout << "Está frio." << endl;
    } else if (temperatura > 15 && temperatura <= 25) {
        cout << "Clima agradável." << endl;
    } else if (temperatura > 25 && temperatura <= 35) {
        cout << "Está quente." << endl;
    } else {
        cout << "Está muito quente!" << endl;
    }

    return 0;
}

