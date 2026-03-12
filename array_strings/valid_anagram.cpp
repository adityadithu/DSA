#include<bits/stdc++.h>
using namespace std;
bool isanagram(string s1,string s2)
{
    unordered_map<char,int>freq;
    if(s1.length() != s2.length())
    {
        return false;
    }
    for(char x:s1)
    {
        freq[x]++;
    }
    for(char x:s2)
    {
        freq[x]--;
        if(freq[x]<0)
            return false;
       
    }
     return true;
}

int main()
{
    string s1="gum";
    string s2="mug";
    if(isanagram(s1,s2))
    {
        cout<<"yes it is anagram"<<endl;
    }
    else{
        cout<<"no its not anagram"<<endl;
    }
}