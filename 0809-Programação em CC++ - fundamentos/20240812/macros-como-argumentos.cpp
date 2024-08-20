#include <iostream>
using namespace std;

#define AREA_DO_CIRCULO(r) (PI * (r) * (r))

int main() {
    const double PI = 3.14159;
    double raio = 5.0;
    cout << "Area do circulo com raio " << raio << " e: " << AREA_DO_CIRCULO(raio) << endl;
    return 0;
}
