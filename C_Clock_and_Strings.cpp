#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,temp;
        cin>>a>>b>>c>>d;
        if(b<a){
            temp=a;
            a=b;
            b=temp;
        }

        if(((c>a&&c<b)&&(d<a||d>b))||((d>a&&d<b)&&(c<a||c>b)))
        cout<<"YES"<<endl;
        else 
        cout<<"NO"<<endl;
    }
}