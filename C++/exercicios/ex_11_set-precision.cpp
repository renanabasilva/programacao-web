#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  double pi = 3.14159265359;

  cout << "Valor de PI com diferentes precisões: " << endl;
  cout << setprecision(1) << pi << endl;
  cout << setprecision(2) << pi << endl;
  cout << setprecision(4) << pi << endl;
  cout << setprecision(6) << pi << endl;
  cout << setprecision(13) << pi << endl;
}