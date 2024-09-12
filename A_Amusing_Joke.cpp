#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    string b;
    cin>>b;
    string c;
    cin>>c;
    int x=c.size();
    char arr[x];

    for(int i=0;i<x;i++)
    {
        arr[i]=c[i];
    }
    int check=0;

    for(int i=0;i<a.size();i++)
    {
        int flag;
        for(int j=0;j<x;j++)
        {
            flag=0;
            if(a[i]==arr[j])
            {
                flag=1;
                arr[j]=0;
                break;
            }
        }
        if(flag==0)
        {
           check=1;
           break;
        }
    }
    for(int i=0;i<b.size();i++)
    {
        int flag;
        for(int j=0;j<x;j++)
        {
            flag=0;
            if(b[i]==arr[j])
            {
                flag=1;
                arr[j]=0;
                break;
            }
        }
        if(flag==0)
        {
           check=1;
           break;
        }
    }

    for(int i=0;i<x;i++)
    {
        if(arr[i]!=0)
        {
            check=1;
        }
    }
    if(check==1)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;

}