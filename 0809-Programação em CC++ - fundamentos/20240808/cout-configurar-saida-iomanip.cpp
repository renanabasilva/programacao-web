//Ajustando a Largura da Coluna (setw)
//O manipulador setw ajusta a largura do campo de sa�da.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int idade = 25;
    double salario = 4500.50;

    cout << setw(10) << "Idade" << "." << "Sal�rio" << endl;
    cout << setw(10) << idade << setw(10) << salario << endl;

    return 0;
}
