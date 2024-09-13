#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int x;
        if(n<2)
        cout<<"0"<<endl;
        else if(n<=k)
        cout<<1<<endl;
        else if(k==2)
        {
            cout<<n-1<<endl;
        }
        else
        {
            x=n/(k-1);
            if(n-(x*(k-1))==1||n-(x*(k-1))==0)
            cout<<x<<endl;
            else
            cout<<x+1<<endl;
        }

    }
}