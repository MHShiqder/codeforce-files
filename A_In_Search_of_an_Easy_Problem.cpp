#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    bool flag=true;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]==1)
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        cout<< "EASY"<<endl;
    }
    else
    {
        cout<< "HARD";
    }
    return 0;
}