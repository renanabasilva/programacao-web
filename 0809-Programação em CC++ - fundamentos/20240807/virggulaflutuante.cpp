#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    float salarioMensal = 4500.75f;
    double salarioAnual = 54009.30;
    long double grandeNumero = 1.2345678901234567890L;

    cout << "Sal�rio Mensal: " << salarioMensal << endl;
    cout << "Sal�rio Anual: " << salarioAnual << endl;
    cout << "Grande N�mero: " << setprecision(15)<< grandeNumero << endl;

    return 0;
}
