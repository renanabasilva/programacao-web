#include <iostream>

using namespace std;

int main() {
  int n1=4, n2=5, aux;
  aux = n1;
  n1 = n2;
  n2 = aux;
  cout<<"n1: "<<n1<<endl;
  cout<<"n2: "<<n2<<endl;
}