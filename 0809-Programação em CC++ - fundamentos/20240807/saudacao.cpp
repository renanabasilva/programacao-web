#include <iostream> // Biblioteca de entrada e sa�da
#include<string>

using namespace std;
// Declara��o de fun��o
void saudacao(string nome){
    cout << "Ola "<<nome<<" bem-vindo ao programa!" << endl;
}
int main(){
    saudacao("Luis");
}
