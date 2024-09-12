#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    int f=0;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int k=0;k<n;k++)
    {
        s[k]=toupper(s[k]);
    }
    for(int i=1;i<=t;i++)
    {
        for(int j=n-1;j>0;j--)
        {
            if(f==2)
            {
                f=0;
                continue;
            }
            if(s[j]=='G'&& s[j-1]=='B')
            {
                s[j]='B';
                s[j-1]='G';
                f=2;
            }
        }
    }
    cout<<s;
    return 0;




}