#include <iostream>
#include <math.h>
using namespace std;

int output(int num){
    for (int i = 1; i <= 30; i++)
    {
        int ans = pow(2,i);
        if (ans==num)
        {
            return true;
        }
    }
    return false;
    
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    cout<<"The number you entered is power of 2: "<<output(num);
    return 0;
}