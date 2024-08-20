#include <iostream>
using namespace std;

int main() {
    int idade;

    cout << "Digite sua idade: ";
    cin >> idade;

    if (idade < 1) {
        cout << "Bebe" << endl;
    }
    else if(idade<12){
        cout << "Criança" << endl;
    }
    else if(idade<18){
        cout << "Jovem" << endl;
    }
    else if(idade<65){
        cout << "Adulto" << endl;
    }
    else{
        cout << "Idoso" << endl;
    }

    return 0;
}
