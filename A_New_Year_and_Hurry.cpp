#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sum,cnt=0;
    cin>>n>>k;
    sum=k;
    for(int i=1;i<=n;i++)
    {
        sum+=(i*5);
        if(sum>240)
        {
            break;
        }
        else
        cnt++;
    }

    cout<<cnt<<endl;
}