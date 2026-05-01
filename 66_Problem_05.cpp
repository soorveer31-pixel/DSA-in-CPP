#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> triplet(vector<int> arr,int size,int target){
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            for (int k = 0; k < arr.size(); k++)
            {
                if (arr[i]+arr[j]+arr[k]==target)
                {
                    ans.push_back({arr[i],arr[j],arr[k]});
                }   
            }  
        }  
    }
    return ans;
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    int target = 9;
    vector<vector<int>> result = triplet(arr,arr.size(),target);
    for (int i = 0; i < arr.size(); i++)
    {
        cout<<result[i][0]<<" "<<result[i][1]<<" "<<result[i][2]<<endl;
        
    }
    return 0;
}