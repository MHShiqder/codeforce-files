#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x;
    int cnt=0;
    x=n/100;
    if(x>0)
    cnt+=x;
    n=n-(100*x);

    x=n/20;
    if(x>0)
    cnt+=x;
    n=n-(20*x);

    x=n/10;
    if(x>0)
    cnt+=x;
    n=n-(10*x);

    x=n/5;
    if(x>0)
    cnt+=x;
    n=n-(5*x);

    x=n/1;
    if(x>0)
    cnt+=x;
    n=n-(1*x);

    cout<<cnt<<endl;

}