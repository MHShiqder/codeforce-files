#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int mini=min(a,b);
    cout<<mini<<" ";
    int more=(a+b)-(2*mini);
    cout<<more/2<<endl;
}