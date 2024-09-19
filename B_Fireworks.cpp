#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        long long a,b,m;
        cin>>a>>b>>m;
        m++;
        long long c=(m+a-1)/a;
        long long d=(m+b-1)/b;
        long long result=c+d;
        cout<<result<<endl;
        
    }
}