#include<iostream>

using namespace std;

int main()  {
  int num, soma = 0;
  bool inicia = true;
  while ( inicia) {
    cout << "digite um numero: - 0 para encerrar"<< endl;
    cin >> num;
    if(num != 0){
      cout << "num = " << num << endl;
      soma = soma + num;
      cout << "soma = " << soma << endl;
    }
    else {
      inicia = false;
    }    
  }
}