#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,k,sum=0;
    cin>>n>>k;
    int arr[50];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>=arr[k-1]&&arr[i]>0)
        {
            sum++;
        }
    }

    cout<<endl<<sum<<endl;
    return 0;
}
