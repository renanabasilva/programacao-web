#include <iostream>
using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;
};

int diasNoMes(int mes) {
    if (mes == 2) {
        return 28;
    } else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        return 30;
    } else {
        return 31;
    }
}

void calcularIdade(Data dataAtual, Data dataNascimento) {
    int dias, meses, anos;

    if (dataNascimento.dia > dataAtual.dia) {
        dataAtual.dia += diasNoMes(dataAtual.mes - 1);
        dataAtual.mes -= 1;
    }

    dias = dataAtual.dia - dataNascimento.dia;

    if (dataNascimento.mes > dataAtual.mes) {
        dataAtual.ano -= 1;
        dataAtual.mes += 12;
    }

    meses = dataAtual.mes - dataNascimento.mes;
    anos = dataAtual.ano - dataNascimento.ano;

    cout << "Idade: " << anos << " anos, " << meses << " meses e " << dias << " dias." << endl;
}

int main() {
    Data dataAtual, dataNascimento;

    cout << "Digite a data atual (dia mes ano): ";
    cin >> dataAtual.dia >> dataAtual.mes >> dataAtual.ano;

    cout << "Digite a data de nascimento (dia mes ano): ";
    cin >> dataNascimento.dia >> dataNascimento.mes >> dataNascimento.ano;

    calcularIdade(dataAtual, dataNascimento);

    return 0;
}
