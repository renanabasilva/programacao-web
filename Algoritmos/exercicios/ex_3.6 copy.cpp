#include <iostream>
using namespace std;
#include <string>
#include <locale>
 
int main(){
setlocale(LC_ALL, "Portuguese");
    // Declaração de variáveis para armazenar os números
    double num1, num2;
 
    // Solicita ao utilizador para inserir quatro números
    cout << "Digite o primeiro número: ";
    cin >> num1;
    cout << "Digite o segundo número: ";
    cin >> num2;
 
 
    // Realiza as operações aritméticas
    double soma = num1 + num2;
    double subtracao = num1 - num2;
    double multiplicacao = num1 * num2;
    double divisao = num1 / num2; // Nota: A divisão por zero pode ocorrer se algum número for zero.
 
    // Exibe os resultados
    cout << "Soma: " << soma << endl;
    cout << "Subtração: " << subtracao << endl;
    cout << "Multiplicação: " << multiplicacao << endl;
    cout << "Divisão: " << divisao << endl;
// Exibe os resultados formatados
    cout << fixed;
    cout.precision(2);
    cout << "Soma: " << soma << endl;
    // ... (saída das outras operações)
 
    if (num2 != 0) {
        // Conversão explícita para float para garantir a divisão com ponto flutuante
        double divisao = static_cast<float>(num1) / num2;
        cout << "Divisão: " << divisao << endl;
    } else {
        cout << "Divisão por zero não é permitida." << endl;
    }
 
    return 0;
}