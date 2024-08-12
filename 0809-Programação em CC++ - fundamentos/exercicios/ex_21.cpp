#include <iostream>
using namespace std;
 
int main() {
    int x = 10;
    int *p = &x; // p é um ponteiro que armazena o endereço de x
    *p=15;
    cout << "Valor de x"<<x;
 
    //cout << "Valor de x: " << x << endl;
    //cout << "Endereço de x: " << &x << endl;
    //cout << "Valor de p (endereço de x): " << p << endl;
    //cout << "Valor apontado por p: " << *p << endl;
 
    return 0;
 
}