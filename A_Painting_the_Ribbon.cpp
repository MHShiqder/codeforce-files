#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        float n,m,k;
        cin>>n>>m>>k;
        int cel=ceil(n/m);
        if((n-cel)>k)
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
        
    }
}