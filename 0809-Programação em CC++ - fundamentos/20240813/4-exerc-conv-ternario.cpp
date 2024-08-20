#include<iostream>

using namespace std;


string conversor_com_ternario(bool a, bool b){

        bool result = a && b;
        return result ? "true" : "false";

}
string conversor_com_ternario1(bool a, bool b){

        bool result = a || b;
        return result ? "true" : "false";

}

int main(){
    cout << "false && false : " << conversor_com_ternario(false, false) << endl;
    cout << "true && false : " << conversor_com_ternario(true, false) << endl;
    cout << "false && true : " << conversor_com_ternario(false, true) << endl;
    cout << "true && true : " << conversor_com_ternario(true, true) << endl;
    cout << "-------------------------------------------------"<<endl;
    cout << "false || false : " << conversor_com_ternario1(false, false) << endl;
    cout << "true || false : " << conversor_com_ternario1(true, false) << endl;
    cout << "false || true : " << conversor_com_ternario1(false, true) << endl;
    cout << "true || true : " << conversor_com_ternario1(true, true) << endl;
return 0;
}
