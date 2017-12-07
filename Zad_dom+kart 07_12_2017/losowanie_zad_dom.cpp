#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){
int l1;
int l2;
int l3;
 srand(time(NULL));
 cout<<"3 wylosowane liczby to: ";
 l1=rand();
 cout<<l1<<",";
 l2=rand();
  cout<<l2<<",";
 l3=rand();
  cout<<l3<<"."<<endl;

  cout<<"Najwieksza liczba to: ";
  if(l1<l2 && l2<l3){

        cout<<l2;}
        else{
            cout<<l3;}

 if(l1>l3){
cout<<l1;
 }





    return 0;
}
