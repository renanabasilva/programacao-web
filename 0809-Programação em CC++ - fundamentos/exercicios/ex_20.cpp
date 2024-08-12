#include <iostream>
using namespace std;
 
int main() {
   int x = 10;
   int *p = &x; // p é um ponteiro que armazena o endereço de x
 
   cout << "Valor de x: " << x << endl;
   cout << "Endereço de x: " << &x << endl;
   cout << "Valor de p (endereço de x): " << p << endl;
 
   return 0;
}