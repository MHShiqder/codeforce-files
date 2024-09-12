#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int a,b;
        a=n;
        b=1;
        int arr[n];
        for(int i=0;i<(n-m);i++)
        {
            arr[i]=a--;
        }
        for(int i=(n-m);i<n;i++)
        {
            arr[i]=b++;
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}