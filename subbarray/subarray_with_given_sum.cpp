#include<bits/stdc++.h>
using namespace std;
bool subarray_sum(vector<int> &nums,int k)
{
    int left=0;
    int n = nums.size();
    int sum = 0;
    for(int right=0;right<n;right++)
    {
            sum += nums[right];
            while(sum > k)
            {
                sum -= nums[left];
                left++;

            }
            if(sum == k)
            {
                return true;
            }
           
    }
    return false;
    
}
int main()
{
    vector<int> nums = {1,4,20,3,10,5};
    int k = 600;
    if(subarray_sum(nums,k))
    {
        cout<<"Yes the subbarray exsist which equal the value k "<<endl;
    }
    else{
        cout<<"it dosent"<<endl;
    }
}