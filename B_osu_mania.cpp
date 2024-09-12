#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=n-1;i>-1;i--)
        {
            int count;
            string targetStr=arr[i];
            count=targetStr.find('#')+1;
            cout<<count<<" ";
        }
        cout<<endl;
    }

}