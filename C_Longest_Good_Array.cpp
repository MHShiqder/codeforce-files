#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r,i,count=0;
        cin>>l>>r;
        if(l==r)
        cout<<1<<endl;
        else
        {
            for(i=1;i<=r;i++)
            {
                l=l+i;
                count++;
                if(l>r)
                {
                    break;
                }
            }
            cout<<count<<endl;
        }
        
    }
}