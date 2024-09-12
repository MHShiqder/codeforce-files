#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum,a,b;
    sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        if(a<b && (b-a)>=2)
        {
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;

}