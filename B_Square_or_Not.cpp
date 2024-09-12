#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        string s;
        cin>>n;
        cin>>s;
        int sqrtVal= sqrt(n);
        int orgVal=sqrtVal*sqrtVal;
        for(int i=0;i<n;i++)
        {
            if (s[i]=='0')
            {
                count++;
            }
        }
        if(orgVal==n)
        {
            int cnt=(sqrtVal-2)*(sqrtVal-2);
            if(count==cnt)
            {
                cout<<"Yes"<<endl;
            }
            else
            cout<<"No"<<endl;
        }
        else
        cout<<"No"<<endl;
        
    }
}