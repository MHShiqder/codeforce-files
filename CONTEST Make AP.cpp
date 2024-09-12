#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,a,b,c;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a>>b>>c;

        if((abs(a-c))%b==0&&abs(a-c)!=1)
        {
            cout<< "YES"<<endl;
        }
        else if(a-b==b-c)
        {
            cout<< "YES"<<endl;
        }
        else if((b+b-c)%a==0&&b!=1)
        {
            cout<< "YES"<<endl;
        }
        else if((b+b-a)%c==0&&b!=1)
        {
            cout<< "YES"<<endl;
        }
        else if(b==c||a==b||a==c)
        {
            if(b==c&&b%a==0)
            {
                cout<< "YES"<<endl;
            }
            else if(a==b&&b%c==0)
            {
                cout<< "YES"<<endl;
            }
            else if(a==c&&a%c==0)
            {
                cout<< "YES"<<endl;
            }
            else
            {
                cout<< "NO"<<endl;
            }
        }
        else
        {
            cout<< "NO"<<endl;
        }
    }
    return 0;
}
