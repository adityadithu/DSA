#include<bits/stdc++.h>
using namespace std;

void insert(vector<int>&heap,int k)
{
    heap.push_back(k);
    int i = heap.size()-1; // store the index of the newly inserted element;
    while(i>0) // we keep moving until we reach the top, which is root
    {
        int parent = (i-1)/2;
        if(heap[parent]>heap[i])
        {
            swap(heap[parent],heap[i]);// swap until ur root becomes less than all the elements 
            i = parent;// you have to update your i 
        }
        else{
            break;
        }

    }

}

int main()
{
    vector<int>heap ={5,10,15};
    insert(heap,2);
    for(int x:heap)
    {
        cout<<x<<" ";
    }

}