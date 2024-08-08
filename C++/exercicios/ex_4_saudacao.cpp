#include <iostream> // Biblioteca de entrada e saída
#include<string>
 
using namespace std;
// Declaração de função
void saudacao(string nome){
    cout << "Ola "<<nome<<" bem-vindo ao programa!" << endl;
}
int main(){
    saudacao("Luis");
}