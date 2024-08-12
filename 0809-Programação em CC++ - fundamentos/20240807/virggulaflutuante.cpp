#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    float salarioMensal = 4500.75f;
    double salarioAnual = 54009.30;
    long double grandeNumero = 1.2345678901234567890L;

    cout << "Salário Mensal: " << salarioMensal << endl;
    cout << "Salário Anual: " << salarioAnual << endl;
    cout << "Grande Número: " << setprecision(15)<< grandeNumero << endl;

    return 0;
}
