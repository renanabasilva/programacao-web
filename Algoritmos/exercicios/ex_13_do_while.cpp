#include <iostream>

using namespace std;

int main()
{
  char letra;
  do
  {
    cout << "letra? - z para terminar " << endl;
    cin >> letra;
    cout << endl
         << "letra utilizador: " << letra << endl;
  } while (letra != 'z');
}