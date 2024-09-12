
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,a,d;
    cin>>n;
    string s;
    cin>>s;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='D')
        {
            sum++;
        }
    }
    d=sum;
    a=n-sum;

    if(a>d)
        cout<<"Anton"<<endl;

    else if(d>a) 
        cout<<"Danik"<<endl;

    else
    cout<< "Friendship";
    return 0;
}