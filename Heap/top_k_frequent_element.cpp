#include<bits/stdc++.h>
using namespace std;
vector<int> topkfrequent(vector<int>&nums,int k )
{
    unordered_map<int,int>freq;
    for(int num:nums)
    {
        freq[num]++;
    }
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>>minheap;
    for(auto it:freq)
    {
        minheap.push({it.second,it.first});
        if(minheap.size()>k)
        {
            minheap.pop();
        }

    }
    vector<int>result;
    while(!minheap.empty())
    {
        result.push_back(minheap.top().second);
        minheap.pop();
    }
    return result;

}
int main()
{
    vector<int>aditya= {1,1,1,1,2,2,2,3,3};
    vector<int>result= topkfrequent(aditya,2);
    for(int x:result)
    {
        cout<<x<<endl;
    }
}