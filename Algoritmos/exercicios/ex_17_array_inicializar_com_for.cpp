#include<iostream>
 
using namespace std;
 
int main(){
    int a[5];
 
    for(int i=0;i<5;i++){
        cout << "valor";
        cin >> a[i];
    }
   
    for(int b:a){
        cout << b<<endl;
    }
}
