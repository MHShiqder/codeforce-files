#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<=n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==arr[j])
            {
               cout<<j+1<< " ";
            }
        }
    }
    
}