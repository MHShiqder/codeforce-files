#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,sum=0,p,x;
     
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        sum+=p;
    }
    x=sum/n;
    cout<<fixed;
    cout<<setprecision(12);
    cout<<x;

}