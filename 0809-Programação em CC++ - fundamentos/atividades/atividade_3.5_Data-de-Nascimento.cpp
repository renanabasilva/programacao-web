#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int dia, mes, ano;

    cout << "Digite o dia do seu nascimento: ";
    cin >> dia;

    if (cin.fail() || dia < 1 || dia > 31)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada invalida. Por favor, digite um dia valido (1-31)." << endl;
        return 1;
    }

    cout << "Digite o mes do seu nascimento: ";
    cin >> mes;

    if (cin.fail() || mes < 1 || mes > 12)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada invalida. Por favor, digite um mes valido (1-12)." << endl;
        return 1;
    }

    cout << "Digite o ano do seu nascimento: ";
    cin >> ano;

    if (cin.fail() || ano < 1900 || ano > 2100)
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Entrada invalida. Por favor, digite um ano valido (1900-2100)." << endl;
        return 1;
    }

    cout << "Sua data de nascimento e: " << dia << "/" << mes << "/" << ano << "." << endl;

    return 0;
}
