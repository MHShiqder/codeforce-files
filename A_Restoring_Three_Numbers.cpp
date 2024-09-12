#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,max=0;
    cin>>a>>b>>c>>d;
    if(a>max)
    max=a;
    if(a>max)
    max=a;
    if(b>max)
    max=b;
    if(c>max)
    max=c;
    if(d>max)
    max=d;
    a=max-a;
    b=max-b;
    c=max-c;
    d=max-d;
    int x[4]={a,b,c,d};    
    for(int i=0;i<4;i++)
    {
        if(x[i]==0)
        {
            continue;
        }
        cout<<x[i]<<" ";
    }
    
}