#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void solve(int start,vector<int>&nums,vector<vector<int>>&result,vector<int>&current)
    {
        result.push_back(current);
        for(int i = start;i < nums.size();i++)
        {
            current.push_back(nums[i]);
            solve(i+1,nums,result,current);
            current.pop_back();
        }

    }
    vector<vector<int>> subset(vector<int>&nums)
    {
        vector<int>current;
        vector<vector<int>>result;
        solve(0,nums,result,current);
        return result;

    }
};

int main()
{
    Solution s;
    vector<int>num = {1,2,3};
    vector<vector<int>>result = s.subset(num);
    for(auto r:result)
    {
        cout<<"[";
        for(auto x:r)
        {
            cout<<x<<" ";
        }
        cout<<"]"<<endl;

    }
    return 0;
}