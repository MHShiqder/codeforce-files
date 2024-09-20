#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if((s[i]=='p'&& s[i+1]=='i'&&s[i+2]=='e')||(s[i]=='m'&& s[i+1]=='a'&&s[i+2]=='p'))
            cnt++;
        }
        for(int i=0;i<n;i++)
        {
            if(s[i]=='m'&& s[i+1]=='a'&& s[i+2]=='p'&& s[i+3]=='i'&& s[i+4]=='e')
            cnt--;
        }
        cout<<cnt<<endl;
        
    }
}