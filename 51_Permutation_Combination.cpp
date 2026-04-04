#include <iostream>
using namespace std;

int fact(int a){
    if (a==0)
    {
        return 1;
    }
    return fact(a-1)*a;
}

int main(){
    int n,r,result;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<"Enter the value of r: ";
    cin>>r;

    result = fact(n)/(fact(r)*fact(n-r));

    cout<<"The result is "<<result;
    return 0;
}