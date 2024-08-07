#include <iostream>

using namespace std;

int main()
{
	int dia;
	bool loop = true;
	while (loop)
	{
		cout << "Qual o dia da semana? Aperte 0 para terminar" << endl;
		cin >> dia;
		switch (dia)
		{
		case 1:
			cout << "Domingo";
			break;
		case 2:
			cout << "Segunda";
			break;
		case 3:
			cout << "Terca";
			break;
		case 4:
			cout << "Quarta";
			break;
		case 5:
			cout << "Quinta";
			break;
		case 6:
			cout << "Sexta";
			break;
		case 7:
			cout << "Sabado";
			break;
		default:
			loop = false;
		}
		cout << endl;
	}
	cout << "finalizando...";
}