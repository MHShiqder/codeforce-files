#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    
    
    sort(ar,ar+n);
    reverse(ar,ar+n);
   
    while (q--)
    {
        int x,y,sum=0;
        cin>>x>>y;
        for(int i=x-y;i<x;i++)
        {
            sum+=ar[i];
        }
        cout<<sum<<endl;
    }
    

}