#include <iostream>
#include <cstring>
using namespace std;
 
int main() {
    char str[] = "Ola, Mundo!";
    size_t comprimento = strlen(str);
    int j=0;
    cout << "String: " << str << endl;
    cout << "Comprimento da string: " << comprimento << endl;
    for(int i=0;i<comprimento;i++){
        cout<<str[i]<<endl;
    }
    cout<<"-----------------------"<<endl;
    while(j<comprimento){
        cout<<str[j]<<endl;
        j++;
    }
    cout<<"-----------------------"<<endl;
    for(char k:str){
        cout<<k<<endl;
    }
 
    return 0;
}