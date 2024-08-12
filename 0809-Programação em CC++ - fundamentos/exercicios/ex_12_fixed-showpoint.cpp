#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double salario = 4500.00;
  double pi = 13.14;

  cout << fixed ;

  cout << setprecision(6);
  cout << "Salario: " << salario << endl;
  cout << "Pi: " << pi << endl;
  cout << "Valor de PI com diferentes precisões: " << endl;
  cout << setprecision(1) << pi << endl;
  cout << setprecision(2) << pi << endl;
  cout << setprecision(4) << pi << endl;
  cout << setprecision(6) << pi << endl;
  cout << setprecision(13) << pi << endl;

  return 0;
}