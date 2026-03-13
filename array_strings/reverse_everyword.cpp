#include<bits/stdc++.h>
using namespace std;
void reverseeveryword(string &s)
{
    int start = 0;
    int end;
    int n = s.length();
    for(end =0;end<=n;end++)
    {
        if(end == n || s[end]==' ')
        {
            int i = start;
            int j = end - 1;
            while(i <=j)
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            start = end +1;
        }
       

    }

}
int main()
{
    string s = "aditya vardhan";
    reverseeveryword(s);
    for(char x:s)
    {
        cout<<x;
    }
}