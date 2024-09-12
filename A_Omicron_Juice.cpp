#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int a,b,c,k,sum,x,y,z;
        cin>>a>>b>>c>>k;
        sum=a+b+c;
        x=abs(a-b);
        y=abs(a-c);
        c=abs(b-c);
        if(sum%3!=0)
        {
            cout<<"Case "<< i<<": Fight"<<endl;
        }
        else
        {
            if(x%k==0 && y%k==0 && z%k==0)
            cout<<"Case "<< i<<": Peaceful"<<endl;
            else
            cout<<"Case "<< i<<": Fight"<<endl;
        }

    }
}