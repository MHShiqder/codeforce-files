#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int p;
    cin>>p;
    string s,x,y;
    for(int i=0;i<p;i++)
    {
        cin>>x;
        s+=x;
    }
    int q;
    cin>>q;
    
    for(int i=0;i<q;i++)
    {
        cin>>y;
        s+=y;
    }
    int sum;
    for(int j=1;j<=n;j++)
    {
        sum=0;
        for(int i=0;i<s.length();i++)
        {
            
            char k= s[i];
            int d= (int)k;
            cout<<j<< "    "<<k<<endl;
            if(j==d)
            {
                sum=1;
                break;
            }
            
        }
        if(sum==0)
        {
        break;
        sum=2;
        }
    }
    if(sum==2)
    cout<< "Oh, my keyboard!"<<endl;
    else 
    cout<< "I become the guy."<<endl;
    return 0;
}