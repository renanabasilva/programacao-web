#include <iostream> // Biblioteca de entrada e saída
#include<string>

// Declaração de função
void saudacao(string nome){
    std::cout << "Olá "<<nome<<" bem-vindo ao programa!" << std::endl;
}
int main(){
    saudacao("Luis");
}