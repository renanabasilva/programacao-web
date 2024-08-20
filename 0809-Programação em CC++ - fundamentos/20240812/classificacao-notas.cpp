#include <iostream>
using namespace std;

int main() {
    float nota;

    cout << "Digite a nota do aluno: ";
    cin >> nota;
    if(nota<9.5){
        cout<<"Insatisfaz"<<endl;
    }
    else if(nota<14){
        cout<<"Satisfaz"<<endl;
    }
    else if(nota<18){
        cout<<"Bom"<<endl;
    }
    else{
        cout<<"Muito Bom"<<endl;
    }


    return 0;
}
