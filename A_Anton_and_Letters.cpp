#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin,a);
    set <int> x;
    for(int i=0;i<(a.size())-1;i++)
    {
        x.insert(a[i]);
    }
    if((x.size())==1)
    {
        cout<<0;
    }
    else if((x.size())==2)
    {
        cout<<1;
    }
    else
    {
        cout<<x.size()-3;
    }    
    
    


}