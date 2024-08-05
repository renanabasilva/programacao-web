#include<iostream>
#include<iomanip>

using namespace std;
int main(){
  float n1, n2;
  cout<<"n1 ";
  cin>>n1;
  cout<<"n2 ";
  cin>>n2;

  cout<<"n1 = "<<n1<<endl<<"n2 = "<<n2<<endl;
  cout<<n1<<" + "<<n2<<" = "<< n1+n2<<endl;
  cout<<n1<<" - "<<n2<<" = "<< n1-n2<<endl;
  cout<<n1<<" * "<<n2<<" = "<< n1*n2<<endl;
  cout<<n1<<" / "<<n2<<" = "<< (float)n1/n2<<endl;
  cout<<fixed<<setprecision(2);
  float div=n1/n2;
  cout<<div<<endl;
  float div1=n2/n1;
  cout<<div1;
  cout<<n1<<" / "<<n2<<" = "<< (float)n1/n2<<endl;
}
