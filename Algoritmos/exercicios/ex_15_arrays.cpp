#include<iostream>
 
using namespace std;
 
int main(){
	int a[]={5,10,15,20,25};
	//cout <<sizeof(a)/4;//int 4 bytes - array tem 5 elementos
	//*4bytes por isso se divide por int
	for(int i=0;i<sizeof(a)/sizeof(int);i++){
		cout <<"a["<<i<<"]="<<a[i]<<endl;
	}

}