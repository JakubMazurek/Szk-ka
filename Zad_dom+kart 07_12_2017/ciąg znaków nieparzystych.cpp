#include <iostream>

using namespace std;

int main()
{
 int x,y;
 cout<<"Podaj x";
 cout<<"\npodaj y"<<endl;
 cin>>x>>y;
 if (x<y)
 {
     for (x;x<=y;x++)
        {
             if(x%2==0){
            cout<<",";
         }else{
             cout<<x;
         }
         if(y%2==0)
         {

        y--;
         }
         if(x==y)
         {
             cout<<".";
         }



        }
 }
    return 0;
}
