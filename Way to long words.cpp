#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    string ch[100];
    for(i=0;i<n;i++)
    {
        cin>>ch[i];

    }
    for(i=0;i<n;i++)
    {
        if(ch[i].length()>10)
            cout<<ch[i][0]<<ch[i].length()-2<<ch[i][ch[i].length()-1]<<endl;
        else
            cout<<ch[i]<<endl;
    }

    return 0;
}

