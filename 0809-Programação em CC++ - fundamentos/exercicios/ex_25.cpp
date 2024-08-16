#include <iostream>
#include <limits>
#include <string>
using namespace std;
 
int main() {
    int idade;
    string nome;
 
    // Leitura da idade
    cout << "Digite sua idade: ";
    cin >> idade;
 
    // Verificação se a entrada falhou
    if (cin.fail()) {
        cin.clear(); // Limpa o estado de erro
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora a entrada incorreta
        cout << "Entrada inválida. Por favor, digite um número inteiro." << endl;
        return 1; // Encerra o programa em caso de erro de entrada
    }
 
    // Limpar o buffer de entrada antes de ler uma string
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpa o buffer de entrada
 
    // Leitura do nome completo
    cout << "Digite seu nome completo: ";
    getline(cin, nome);
 
    // Verificação se a entrada do nome falhou
    if (cin.fail() || nome.empty()) {
        cin.clear(); // Limpa o estado de erro
        cout << "Entrada inválida. O nome não pode estar vazio." << endl;
        return 1; // Encerra o programa em caso de erro de entrada
    }
 
    // Saída dos dados lidos
    cout << "Sua idade é: " << idade << endl;
    cout << "Olá, " << nome << "!" << endl;
 
    return 0;
}