#include<bits/stdc++.h>
using namespace std;
int kth_largest(vector<int>&heap,int k)
{
    int n = heap.size();
    priority_queue<int, vector<int>, greater<int>>minheap;
    for(int i = 0;i<n;i++)
    {
        minheap.push(heap[i]);
        if(minheap.size()>k)
        {
            minheap.pop();
        }
    }
    return minheap.top();
}
int main()
{
    vector<int> heap = {3,2,1,5,6,4};
    int k = 2;
    cout<<kth_largest(heap,k);

}