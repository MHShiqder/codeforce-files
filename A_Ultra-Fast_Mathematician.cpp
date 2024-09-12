#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string a,b;
    string c;
    cin>>a;
    cin>>b;
    int arra[a.length()];
    int temp=a.length();
    for( i=temp-1;i>=0;i--)
    {
        
        if(a[i]==b[i])
        {
           c=c+"0";
        }
        else
        {
            c=c+"1";
        }
        
    }
    // for( i=0;i<temp;i++)
    // {
    //     cout<<arra[i];
    // }
    reverse(c.begin(), c.end());
    cout<<c;
    
    return 0;
}