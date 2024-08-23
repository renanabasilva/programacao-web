#include<iostream>
using namespace std;


int main(){
    int i,soma=0;

    bool ciclo=true;

    do{
        cout << "num - 0 para terminar"<<endl;
        cin >> i;
        soma=soma+i;
    }while(i!=0);
    cout <<"A soma e="<<soma;

}
