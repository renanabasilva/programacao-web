//dado o codigo seguinte - substitua o primeiro for por um while
// int main(){
//     int a[5];
//     for(int i=0;i<5;i++){
//         cout << "valor";
//         cin >> a[i];
//     }   
//     for(int b:a){
//         cout << b<<endl;
//     }
// }

#include<iostream>

using namespace std;
int main(){
    int a[5];
    int i=0;

    while(i<5){
      cout<< "Digite o " << i+1 << ". valor: ";
      cin >> a[i];
      i++;
    }
   
    for(int b:a){
        cout << b <<endl;
    }
}