#include <iostream>
#include <string>
#include <locale>
using namespace std;
 
int main() {
setlocale(LC_ALL, "Portuguese");
    int dia;
    string dias_da_semana[7] = {"Domingo", "Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado"};
 
    cout << "Digite um número de 1 a 7 (1 = Domingo, 7 = Sábado): ";
    cin >> dia;
 
    if (dia >= 1 && dia <= 7) {
        cout << "O dia da semana escolhido é: " << dias_da_semana[dia - 1] << endl;
    } else {
        cout << "Número inválido. Digite um número entre 1 e 7." << endl;
    }
 
    return 0;
}