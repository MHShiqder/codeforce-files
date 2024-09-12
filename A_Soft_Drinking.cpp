#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np,m,drink,salt,slice;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    drink=(k*l)/nl;
    salt=p/np;
    slice=c*d;
    m=min(drink,min(salt,slice));
    cout<<m/n<<endl;
}