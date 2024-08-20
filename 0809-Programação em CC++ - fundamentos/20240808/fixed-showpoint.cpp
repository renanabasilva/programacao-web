#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double salario = 4500.5010;
    double pi = 3.14;
    cout << fixed << showpoint;
    cout << setprecision(10);
    cout << "Salário: " << salario << endl;
    cout << "pi" << pi;
    return 0;
}
