#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tep,n,x,t;
    cin>>tep;
    int a,b,c,d;
    x=tep+1;
    for(int i=x;i<=9012;i++){
        n=i;
        
        a=n%10;
        n=n/10;
        b=n%10;
        n=n/10;
        c=n%10;
        n=n/10;
        d=n%10;
        if(a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&d!=c)
        {
            cout<<i<<endl;
            break;
        }

    }
    return 0;
        
        
}