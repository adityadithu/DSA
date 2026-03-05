#include<bits/stdc++.h>
using namespace std;
void heapfiy(vector<int>&heap,int i)
{   int n = heap.size();
    while(true)
    {
        int left = 2*i+1;
        int right = 2*i+2;
        int smallest = i;
        if(left <n && heap[left]<heap[smallest])
        {
            smallest= left;
        }
        if(right<n && heap[right]<heap[smallest])
        {
            smallest = right;
        }
        if(smallest!=i)
        {
            swap(heap[i],heap[smallest]);
            i = smallest;
        }
        else{
            break;
        }
    }
}
void build(vector<int>&heap)
{
    int n = heap.size();
    for(int i = n/2-1;i>=0;i--)
    {
        heapfiy(heap,i);
    }

}
int main()
{
    vector<int> heap = {12,7,25,15,28,33};
    build(heap);
    for(int x:heap)
    {
        cout<<x<<" ";
    }
}