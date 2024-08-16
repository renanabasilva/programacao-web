#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

int main()
{
  double nota;

  cout << "Digite sua nota: ";
  cin >> nota;

  if (cin.fail())
  {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Entrada invalida. Por favor, digite um numero decimal." << endl;
  }
  else
  {
    cout << fixed << setprecision(2);
    cout << "Sua nota e: " << nota << endl;
  }

  return 0;
}
