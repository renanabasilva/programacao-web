#include<iostream>
using namespace std;

int main(){
    int limite,acum,num, excedente;

    cout << "Defina um valor de limite: ";
    cin >> limite;

    while(acum<limite){
        cout << endl << "Adicione um valor: ";
        cin >> num;
        if(acum + num > limite) {
          excedente = limite - acum;
          cout << "O valor NAO FOI adicionado pois excede o valor limite, insira um valor menor ou igual a " << excedente;
        } else {
          acum+=num;
        }
        cout << endl << "Total acumulado: " << acum;
    }
}
