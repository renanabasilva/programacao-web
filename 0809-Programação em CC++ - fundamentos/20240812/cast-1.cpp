#include <iostream>
using namespace std;

int main() {
    int x=15;
    double y;

    // Convers�o impl�cita
    y = x/2;
    cout << "y (convers�o impl�cita): " << y << endl;

    // C-style cast
    y = (double)x/2;
    cout << "y (C-style cast): " << y << endl;

    // static_cast
    y = static_cast<double>(x)/2;
    cout << "y (static_cast): " << y << endl;

    return 0;
}
