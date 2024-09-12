#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,i,sum;
    cin>>k>>r;
    for(i=1;i>0;i++)
    {
        sum=k*i;
        if(sum%10==0 || (sum-r)%10==0)
        break;
    }
    cout<<i;
}