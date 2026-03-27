#include <iostream>
using namespace std;

int main(){
    int num;
    while (true)
    {
        cout<<"Enter the number: ";
        cin>>num;
        switch (num)
        {
            case 1:
            cout<<"First"<<endl;
            break;
            case 2:
            cout<<"Second"<<endl;
            break;
            case 3:
            cout<<"Third"<<endl;
            exit(0);
            case 4:
            cout<<"Fourth"<<endl;
            break;
            case 5:
            cout<<"Fifth"<<endl;
            break;
            
            default:
            cout<<"Number out of case"<<endl;
            break;
        }   
    }
    return 0;
    }