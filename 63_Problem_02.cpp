#include <iostream>
using namespace std;

int uniqueElement(int *arr,int size){
    int ans = 0;
    for(int i=0;i<size;i++){
        ans = ans^arr[i];
    }

    for (int i = 1; i < size-1; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

int main(){
    int arr[7] = {10,11,12,13,14,15,11};
    cout<<uniqueElement(arr,7);
    return 0;
}