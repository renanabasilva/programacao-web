#include<iostream>

using namespace std;


int main(){
    int tab;
    cout << "qual a tabuada?"<<endl;
    cin >> tab;
    for(int i=1;i<=10;i++){
        cout << tab<<"*"<<i<<"="<<tab*i<<endl;
    }

}

