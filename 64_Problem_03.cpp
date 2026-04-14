#include <iostream>
#include <vector>
using namespace std;

vector<int> intersection(int *arr1,int n,int *arr2,int m){
    int i=0,j=0;
    vector<int> ans;

    while (i<n && j<m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++,j++;
        }
        else if (arr1[i]<arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

int main(){
    int arr1[5] = {1,2,3,4,5};
    int arr2[3] = {0,3,5};

    vector<int> result = intersection(arr1,5,arr2,3);

    for (int i = 0; i < sizeof(result)/sizeof(int)-1; i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}