#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Dados
    int idade = 25;
    double salario = 4500.50;
    double pi = 3.14159265359;
    const int largura = 15;

    // Cabeçalho
    cout << left << setw(largura) <<"Descricao" << right<< setw(largura) << "Valor" << endl;
    cout << setfill('-') << setw(2 * largura) << "-" << setfill(' ') << endl;

    // Saída formatada
    cout << left << setw(largura) << "Idade" << right << setw(largura) << idade << endl;
    cout << left << setw(largura) << "Salario" << right << setw(largura) << fixed << setprecision(2) << salario << endl;
    cout << left << setw(largura) << "PI" << right << setw(largura) << fixed << setprecision(5) << pi << endl;

    return 0;
}
