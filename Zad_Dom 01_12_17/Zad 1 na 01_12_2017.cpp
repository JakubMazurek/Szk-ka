#include <iostream>

using namespace std;

int main(){

 int liczba,system,
 string bin="";

 cout<<"Podaj liczbe oraz podaj system liczbowy"<<endl;

 cin>>liczba>>system;

 if (liczba!=0){
    if(system!=0){
        switch(system){
    case 10:
         cout<<"\n dziesietny = "<<liczba;
         break;
    case 8:
          cout<<"\n osemkowy = "<<oct<<liczba;
          break;
    case 16:
         cout<<"\n szesnastkowy = "<<hex<<liczba;
    case 2:
        while(liczba>0)
        {
         if (liczba%2==0){
            bin="0"+bin;
         }
         else {
            bin="1"+bin;
         };
         liczba=liczba/2;
        }
        cout<< bin;
        break;
    // case 7 podda³em siê :c






        }
        }
    }
    return 0;
 }

