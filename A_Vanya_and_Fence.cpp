#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,n;
    cin>>n>>h;
    int ind[n];
    for(int i=0;i<n;i++)
    {
        cin>>ind[i];
    }
    int sum=n;
    for(int i=0;i<n;i++)
    {
        if(ind[i]>h)
        {
            sum++;
        }
    }
    cout<<sum;
    
    

}