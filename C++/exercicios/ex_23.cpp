#include <iostream>
using namespace std;
 
void incrementar(int *p) {
    (*p)++;
 
}
 
int main() {
    int valor = 10;
    cout << "Valor antes de incrementar: " << valor << endl;
 
    incrementar(&valor);
 
    cout << "Valor depois de incrementar: " << valor << endl;
    return 0;
}