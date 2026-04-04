#include <iostream>
using namespace std;

int isEven(int a){
    if (a&1)
    {
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    
    if (isEven(num))
    {
        cout<<num<<" is Even number";
    }
    else{
        cout<<num<<" is Odd number";
    }

    return 0;
}