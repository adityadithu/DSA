#include<bits/stdc++.h>
using namespace std;
char nonrepating(string s)
{
    unordered_map<char,int>freq;
    for(char x:s)
    {
        freq[x]++;

    }
    for(char x:s)
    {
        if(freq[x]==1)
        {
            return x;
        }
    }
    return 0;
}
int main()
{
    string s = "aditya";
    char result = nonrepating(s);
    cout<<result<<endl;
}