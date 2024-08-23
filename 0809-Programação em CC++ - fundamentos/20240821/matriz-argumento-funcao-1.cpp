#include<iostream>
using namespace std;

int soma(int arr[],int tamanho){
    int total=0;
    for(int i=0;i<tamanho;i++){
        total=total+arr[i];
        cout << "posicao "<< i << " valor " << arr[i]<<endl;
    }
    return total;
}

int main(){

    int num[3]={3,6,9};

    int resultado=soma(num,3);
    cout <<"Resultado="<<resultado<<endl;
}
