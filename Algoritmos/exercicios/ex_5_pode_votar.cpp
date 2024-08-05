//saber se uma pessoa pode votar
//pedir idade ao utilizador
//excluir idade<18
//ou apenas incluir os que tem idade>=18
 
#include<iostream>
#include<locale>
 
using namespace std;
 
int main(){
	setlocale(LC_ALL, "");
	int idade;
	cout << "Idade?"<<endl;
	cin >> idade;
	if(idade>=18){
		cout << "Pode votar!";
	}
	else{
		cout << "NÆo pode votar!";
	}
	return 0;
}
