#include <iostream>
using namespace std;

int main() {
    int numero;
    bool ciclo=true;


    while (ciclo){
        cout << "Digite um n�mero entre 1 e 10: ";
        cin >> numero;

        if (numero < 1 || numero > 10) {
            cout << "N�mero inv�lido. Tente novamente." << endl;
        }
        else{
            ciclo=false;
        }
    }

    cout << "Voc� digitou um n�mero v�lido: " << numero << endl;

    return 0;
}
