#include<bits/stdc++.h>
using namespace std;
bool containduplicate(vector<int>&nums)
{
    unordered_map<int,int> freq;
    for(int x:nums)
    {
        freq[x]++;
        if(freq[x]>1)
        {
            return true;
        }

    }
    return false;
    
    
}
int main()
{
    vector<int> a = {1,2,3};
    if(containduplicate(a))
    {
        cout<<"yes duplicates exsists"<<endl;
    }
    else{
        cout<<"duplicates dont exsists"<<endl;
    }
}