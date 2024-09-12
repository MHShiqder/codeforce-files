#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,cntOne=0,cntZero=0;
        cin>>n;
        string str;
        cin>>str;
        if(str[0]=='0')
        cntZero++;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='0' && str[i-1]=='1')
                cntZero++;
            if(str[i]=='1')
                cntOne++;

        }
        if(cntOne>cntZero)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    }
}