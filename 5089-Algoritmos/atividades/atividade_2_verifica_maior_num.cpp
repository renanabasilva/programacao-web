// dados dois numeros int - n1=5, n2=10
// usando a condição if(n1>n2) --- escrever que n1 é maios
// else --- escrever n2 é maior
// verificar qual dos numeros é maior

#include <iostream>

using namespace std;

int main()
{
  int n1 = 5, n2 = 10;

  if (n1 > n2)
  {
    cout << "n1 maior que n2";
  }
  else if (n1 < n2)
  {
    cout << "n2 maior que n1";
  }
  else if (n1 == n2)
  {
    cout << "n1 e n2 tem o mesmo valor";
  }

  return 0;
}