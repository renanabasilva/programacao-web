#include <iostream> // Biblioteca de entrada e saída
 
// Declaração de função
void saudacao() {
    std::cout << "Olá bem-vindo ao programa!" << std::endl;
}
 
int soma(int a, int b) {
    return a + b;
}
 
int main() {
    saudacao(); // Chamada da função saudacao
 
    int x, y;
    std::cout << "Digite dois numeros: ";
    std::cin >> x >> y;
 
    int resultado = soma(x, y);
    std::cout << "A soma dos numeros é: " << resultado << std::endl;
 
    if (resultado > 10) {
        std::cout << "A soma e maior que 10" << std::endl;
    } else {
        std::cout << "A soma e 10 ou menor" << std::endl;
    }
 
    for (int i = 0; i < 3; i++) {
        std::cout << "Iteracao: " << i << std::endl;
    }
 
    return 0;
}