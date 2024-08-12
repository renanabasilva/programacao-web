#include<iostream>
 
using namespace std;
 
int main(){
    int a[5],cont=0;
 
    //for(int i=0;i<5;i++){
    //  cout << "valor";
    //  cin >> a[cont];
    //}
 
    while(cont<5){
        cout << "valor";
        cin >> a[cont];
        cont++;//incrementa 1 valor a variavel
    }
 
 
    for(int b:a){
        cout << b<<endl;
    }
}