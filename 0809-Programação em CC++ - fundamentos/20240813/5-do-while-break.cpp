#include <iostream>
using namespace std;

int main() {
    int num;

    do{
        cout << "Digite um n�mero (0 para sair): ";
        cin >> num;

        /*if (num == 0) {
            break; // Sai do loop se o n�mero for 0
        }*/

        cout << "Voc� digitou: " << num << endl;
    }while (num!=0);

    cout << "Fim do programa." << endl;
    return 0;
}
