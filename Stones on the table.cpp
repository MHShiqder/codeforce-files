#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,sum=0;
    cin>>n;
    string s;
    cin>>s;
    for(i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            sum++;
        }
    }
    cout<<sum<<endl;


    return 0;



}
