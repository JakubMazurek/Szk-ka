#include <iostream>
#include<cmath>
#include<math.h>


using namespace std;

int main()
{
    int a,b,c;
    cout<<"Podaj dlugosci odcinkow"<<endl;
    cin>>a>>b>>c;
    if(a+b<c && b+c<a && c+a<b){
        cout<<"Odcinki moga zbudowac trojkat"<<endl;
    }
        else{
            cout<<"odcinki nie moga zbudowac trojkata"<<endl;

        }
main() ;

return 0;
}
