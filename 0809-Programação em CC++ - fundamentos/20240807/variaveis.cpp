#include <iostream>
using namespace std;

int main() {
    int idade = 25;
    double salario = 4500.50;
    char letra = 'A';
    string n1="1",n2="2";
    char a='a',b='b';
    string concat;
    concat+=a;
    concat+=b;

    cout << "Idade: " << idade << endl;
    cout << "Salario: " << salario << endl;
    cout << "Letra: " << letra << endl;
    cout << "soma de n1 com n2="<<n1+n2<<endl;
    cout << "concatenacao de a e b "<<concat;
    return 0;
}
