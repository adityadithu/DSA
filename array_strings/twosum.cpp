#include<bits/stdc++.h>
using namespace std;
vector<int> twosum(vector<int>&nums,int k)
{
    unordered_map<int,int>s;
    for(int i =0;i<nums.size();i++)
    {
        int complement = k - nums[i];
        if(s.find(complement)!=s.end())
        {
            return {s[complement],i};
        }
        s[nums[i]]=i;

    }
    return {};
}
int main()
{
    vector<int> a = {3,4,6};
    int k = 10;
    vector<int> result =twosum(a,k);
    cout<<result[0]<<" "<<result[1];
    
}