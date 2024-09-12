#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[100],bh[100];
    int i;
    cin>>ch;
    cin>>bh;
    for( i=0;i<strlen(ch);i++)
    {
        ch[i]=tolower(ch[i]);
        bh[i]=tolower(bh[i]);
        if(ch[i]!=bh[i])
        {
            break;
        }
    }
    if(int(ch[i])<int(bh[i]))
    {
        cout<<"-1"<<endl;
    }

    else if(int(ch[i])>int(bh[i]))
    {
        cout<<"1"<<endl;
    }

    else
    {
        cout<<"0"<<endl;
    }


}
