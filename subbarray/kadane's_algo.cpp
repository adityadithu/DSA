#include<bits/stdc++.h>
using namespace std;
int kadane(vector<int> &nums)
{
    int curr= nums[0];
    int final = nums[0];
    int n = nums.size();
    for(int i =0;i<n;i++)
    {
        curr = max(nums[i],curr+nums[i]);
        final = max(final,curr);
    }
    return final;
}
int main()
{
    vector<int> nums = {-1,-2,3,4,7};
    int result = kadane(nums);
    cout<<"the the sum is "<< result<<endl;
}