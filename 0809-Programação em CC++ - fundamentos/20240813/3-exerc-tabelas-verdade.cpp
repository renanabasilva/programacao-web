#include <iostream>
#include <string>


using namespace std;

string conversor(bool a, bool b){

        bool result = a && b;
        if(result ==0){
            return "false";
        }else{
            return "true";
        }

}

string conversor1(bool a, bool b){

        bool result = a || b;
        if(result ==0){
            return "false";
        }else{
            return "true";
        }

}


string conversor_com_ternario(bool a, bool b){

        bool result = a && b;
        return result ? "true" : "false";

}
string conversor_com_ternario1(bool a, bool b){

        bool result = a || b;
        return result ? "true" : "false";

}
int main() {

    cout << "false && false : " << conversor(false, false) << endl;
    cout << "true && false : " << conversor(true, false) << endl;
    cout << "false && true : " << conversor(false, true) << endl;
    cout << "true && true : " << conversor(true, true) << endl;
    cout << "-------------------------------------------------"<<endl;
    cout << "false || false : " << conversor1(false, false) << endl;
    cout << "true || false : " << conversor1(true, false) << endl;
    cout << "false || true : " << conversor1(false, true) << endl;
    cout << "true || true : " << conversor1(true, true) << endl;
    return 0;
}


