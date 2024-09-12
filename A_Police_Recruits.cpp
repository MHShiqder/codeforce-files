#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int cnt=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            sum+=arr[i];
        }
        else
        {
            if(sum>0)
            {
                sum--;
            }
            else
            {
                cnt++;
            }
        }

    }
    
    cout<<cnt<<endl;
}