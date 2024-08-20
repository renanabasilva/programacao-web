#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main() {
    // Obtém o tempo atual do sistema
    auto now = system_clock::now();

    // Converte para o tempo do calendário
    auto now_time_t = system_clock::to_time_t(now);
    std::tm now_tm = *std::localtime(&now_time_t);

    int dia_nascimento;
    int mes_nascimento;
    int ano_nascimento;

    // Data de nascimento fixada
    cout << "Digite a o ano de nascimento: " << endl;
    cin>> ano_nascimento;

    cout << "Digite a mes de nascimento: " << endl;
    cin>> mes_nascimento;

    cout << "Digite a o dia de nascimento: "<< endl;
    cin>> dia_nascimento;


    // Calcula a idade
    int idade = now_tm.tm_year + 1900 - ano_nascimento; // Idade base

    // Ajusta a idade se a data de nascimento ainda não ocorreu neste ano
    if (now_tm.tm_mon + 1 < mes_nascimento ||
        (now_tm.tm_mon + 1 == mes_nascimento && now_tm.tm_mday < dia_nascimento)) {
        idade--;
    }

    cout << "Idade: " << idade << endl;

    return 0;
}
