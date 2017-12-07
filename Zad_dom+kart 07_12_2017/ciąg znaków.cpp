#include <iostream>

using namespace std;

int main()
{
  int i,q;
  cout<<"podaj liczbe poczatkowa i koncowa przedzialu"<<endl;
  cin>>i>>q;


if(i<q){
  for(i;i<=q;i++)
    {
        if(i%2==0 && i<q){
            cout<<",";
        }
        else if(i!=q){
          cout<<i;
        }






  }
}
    return 0;
}
