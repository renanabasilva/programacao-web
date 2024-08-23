#include<iostream>
using namespace std;


int main(){
    int i,soma=0;

    bool ciclo=true;

    while(ciclo){

        cout << "num - 0 para terminar"<<endl;
        cin >> i;
        if(i!=0){
            soma=soma+i;
        }
        else{
            cout << "ate a proxima!"<<endl;
            break;
        }
    }
    cout <<"A soma e="<<soma;

}
