#include <iostream>
using namespace std;

int main() {
    double x = 10.5;
    int y;

    // Convers�o impl�cita
    y = x;
    cout << "y (convers�o impl�cita): " << y << endl;

    // C-style cast
    y = (int)x;
    cout << "y (C-style cast): " << y << endl;

    // static_cast
    y = static_cast<int>(x);
    cout << "y (static_cast): " << y << endl;

    return 0;
}
