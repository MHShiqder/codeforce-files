#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int arr[x];
        for(int f=0;f<x;f++)
        {
            cin>>arr[f];
        }
        sort(arr,arr+x);
        int flag=1;
        for(int i=0;i<x-2;i++)
        {
            if(arr[i]==arr[i+1] && arr[i]==arr[i+2])
            {
                flag=0;
                cout<<arr[i]<<endl;
                break;
            }
        }
        if(flag==1)
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}