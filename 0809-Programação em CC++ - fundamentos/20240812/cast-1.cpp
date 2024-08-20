#include <iostream>
using namespace std;

int main() {
    int x=15;
    double y;

    // Conversão implícita
    y = x/2;
    cout << "y (conversão implícita): " << y << endl;

    // C-style cast
    y = (double)x/2;
    cout << "y (C-style cast): " << y << endl;

    // static_cast
    y = static_cast<double>(x)/2;
    cout << "y (static_cast): " << y << endl;

    return 0;
}
