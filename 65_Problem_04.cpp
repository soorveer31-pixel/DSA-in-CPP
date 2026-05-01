#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> findingPairSum(vector<int> arr,int n,int value){
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i+1; j < arr.size(); j++)
        {
            if (arr[i]+arr[j] == value)
            {
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
            
        }
        
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main()
{
    vector<int> arr = {1,2,3,4,5};
    int find = 5;
    vector<vector<int>> result = findingPairSum(arr,arr.size(),find);
    for(int i = 0; i < result.size(); i++)
    {
        cout << "[" << result[i][0] << ", " << result[i][1] << "]" << endl;
    }
    return 0;
}
