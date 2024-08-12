//Função 'main' p/ ler a data atual e a data de nascimento do usuário e void 'calcularIdade' p/ obter a idade detalhada;
//Primeiro defini uma estrutura p/armazenar uma data com dia, mes e ano com a declaração 'Data';
//Depois usei void CalcularIdade p/ calcular a diferença entre a data atual e a data de nascimento;
//Usei a função 'if < 0' p/ ajustar a contagem de dias e meses, quando o resultado for negativo;
//O programa exibe a idade em anos, meses e dias;
//E por último pede ao usuário p/ digitar 0 p/ sair.
 
 
#include <iostream>
#include <locale>
 
using namespace std;
 
struct Data {
    int dia;
    int mes;
    int ano;
};
 
void calcularIdade(Data dataAtual, Data dataNascimento, int& anos, int& meses, int& dias) {
    anos = dataAtual.ano - dataNascimento.ano;
    meses = dataAtual.mes - dataNascimento.mes;
    dias = dataAtual.dia - dataNascimento.dia;
 
    if (dias < 0) {
        meses--;
        dias += 30; // Aproximação simples p/ o número de dias no mês anterior
    }
 
    if (meses < 0) {
        anos--;
        meses += 12;
    }
}
 
int main() {
    Data dataAtual;
    Data dataNascimento;
 
    cout << "Digite a data atual (dia mes ano): ";
    cin >> dataAtual.dia >> dataAtual.mes >> dataAtual.ano;
 
    cout << "Digite sua data de nascimento (dia mes ano): ";
    cin >> dataNascimento.dia >> dataNascimento.mes >> dataNascimento.ano;
 
    int anos, meses, dias;
    calcularIdade(dataAtual, dataNascimento, anos, meses, dias);
 
    cout << "Você tem " << anos << " anos, " << meses << " meses e " << dias << " dias." << endl;
 
    // Comando para sair
    cout << "Digite 0 para sair: ";
    int sair;
    cin >> sair;
 
    return 0;
}

