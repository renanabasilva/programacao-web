#include <iostream>
using namespace std;

int main()
{
  int matriz[3][3];
  int c_array_e = sizeof(matriz) / sizeof(matriz[0]);

  for (int i = 0; i < c_array_e; i++)
  {
    int c_array_i = sizeof(matriz[i]) / sizeof(matriz[i][0]);
    for (int j = 0; j < c_array_i; j++)
    {
      cout << "Digite o valor para matriz[" << i << "][" << j << "]: ";
      cin >> matriz[i][j];
    }
  }

  cout << "Os valores da matriz 2D sao: " << endl;
  for (int i = 0; i < c_array_e; i++)
  {
    int c_array_i = sizeof(matriz[i]) / sizeof(matriz[i][0]);
    cout << "| ";
    for (int j = 0; j < c_array_i; j++)
    {
      cout << matriz[i][j] << " ";
    }
    cout << "|" << endl;
  }

  return 0;
}
