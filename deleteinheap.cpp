#include<bits/stdc++.h>
using namespace std;
void heapify(vector<int>&heap,int i)
{
    int n = heap.size();
    while(true) // runs indefinitely until we explicity stop so remeber this
    {
        int left = 2*i+1;
        int right = 2*i+2;
       int smallest = i;
        if(left<n && heap[left]<heap[smallest])
        {
            smallest = left;
        }
        if(right<n && heap[right]<heap[smallest])
        {
            smallest = right;
        }
        if(smallest!=i)
        {
            swap(heap[smallest],heap[i]);
            i = smallest;
        }
        else{
            break;
        }
}
}

void deleteroot(vector<int>&heap)
{
    heap[0] = heap.back();
    heap.pop_back();
    heapify(heap,0);

}

int main()
{
    vector<int>arrr = {5,10,15,20};
    deleteroot(arrr);
    for(int x:arrr)
    {
        cout<<x<<" ";
    }
}