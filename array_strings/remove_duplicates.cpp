#include<bits/stdc++.h>
using namespace std;
int removeduplicates(vector<int>&nums)
{
    int i =0;//here i points to last unique element
    int n = nums.size();
    for(int j =1;j<n;j++)//here j is just used to scanning the array
    {
       if(nums[j]!=nums[i])
       {
        i++;
        nums[i]=nums[j];
       }


    }
    return ++i;

}
int main()
{
    vector<int>nums = {0,0,1,2};
    int result = removeduplicates(nums);
    cout<<"The length of the new array after removing duplicates is:"<<result<<endl;
}