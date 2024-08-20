#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[] = "Ola, Mundo!";
    size_t comprimento = strlen(str);

    cout << "String: " << str << endl;
    cout << "Comprimento da string: " << comprimento << endl;

    return 0;
}
