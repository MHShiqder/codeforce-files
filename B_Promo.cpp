#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    long long ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    
    
    sort(ar,ar+n);
    long long ar2[n+1];
    ar2[0]=0;

    for(int i=0;i<n;i++)
    {
        ar2[i+1]=ar2[i]+ar[i];
    }
   

   
    while (q--)
    {
        int x,y;
        cin>>x>>y;
        
        cout<<ar2[n-x+y]-ar2[n-x] <<endl;
    }
    return 0;

}