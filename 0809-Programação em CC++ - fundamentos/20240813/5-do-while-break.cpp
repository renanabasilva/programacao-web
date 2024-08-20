#include <iostream>
using namespace std;

int main() {
    int num;

    do{
        cout << "Digite um número (0 para sair): ";
        cin >> num;

        /*if (num == 0) {
            break; // Sai do loop se o número for 0
        }*/

        cout << "Você digitou: " << num << endl;
    }while (num!=0);

    cout << "Fim do programa." << endl;
    return 0;
}
