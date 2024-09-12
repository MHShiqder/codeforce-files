#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    x=n%10;

    if(x==1)
    cout<<n-1;

    else if(x==2)
    cout<<n-2;
    
    else if(x==3)
    cout<<n-3;
    
    else if(x==4)
    cout<<n-4;
    
    else if(x==(5+1))
    cout<<n+4;
    
    else if(x==7)
    cout<<n+3;
    
    else if(x==8)
    cout<<n+2;

    else if(x==9)
    cout<<n+1;

    else if(x==0)
    cout<<n;

    else
    cout<<n-5;


    
}