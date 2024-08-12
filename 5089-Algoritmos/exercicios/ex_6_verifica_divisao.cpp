#include <iostream>
using namespace std;

int main()
{
  float n1, n2, div;

  cout << "n1? ";
  cin >> n1;
  cout << "n2? ";
  cin >> n2;

  if (n2 == 0)
  {
    cout << "Nao e possivel dividir por 0";
    return 0;
  }

  div = n1 / n2;

  cout << "O valor da divisao: " << div;

  return 0;
}