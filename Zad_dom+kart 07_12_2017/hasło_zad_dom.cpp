#include <iostream>

using namespace std;

int main()
{
string h="zsk", h1;
int t=1;
for(t;t<=3;t++){
    cin>>h1;
    if (h1==h && t<=3){
        cout<<"Gratulaje odgales haslo po "<<t<<" probie"<<endl;

    }
    if (h1!=h && t<=3){
        cout<<"Nie odgadles hasla"<<endl;
    }
}
    return 0;
}
