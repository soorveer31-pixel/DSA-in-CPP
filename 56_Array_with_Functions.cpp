#include <iostream>
using namespace std;

void PrintingArray(int *arr,int size){
    cout<<"Printing Array"<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    PrintingArray(arr,10);
    return 0;
}