#include<bits/stdc++.h>
using namespace std;
void reversestring(string &s)
{
    int n = s.length();
    reverse(s.begin(),s.end());
    int start=0;
    for(int end =0;end<=n;end++)
    {
        if(end==n || s[end]==' ')
        {
            int i = start;
            int j = end-1;
            while(i<j)
            {
               swap(s[i],s[j]);
               i++;
               j--;
            }
            
            start= end + 1;
            
        }
       
    }
}
int main()
{
    string s = "aditya vardhan mudiraj";
    reversestring(s);
    for(char x:s)
    {
        cout<<x;
    }
}