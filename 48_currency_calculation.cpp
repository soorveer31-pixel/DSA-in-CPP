#include <iostream>
using namespace std;

int main(){
    int amount,hnd=0,ffy=0,ty=0,one=0;
    cout<<"Enter the amount: ";
    cin>>amount;
    
    if (amount>=100)
    {
        hnd = amount/100;
        amount%=100;
    }
    if (amount>=50)
    {
        ffy = amount/50;
        amount%=50;
    }
    if (amount>=20)
    {
        ty = amount/20;
        amount%=20;
    }
    one = amount;

    cout<<"Hundred note: "<<hnd<<endl;
    cout<<"Fifty note: "<<ffy<<endl;
    cout<<"twenty note: "<<ty<<endl;
    cout<<"one note: "<<one<<endl;
    return 0;
}