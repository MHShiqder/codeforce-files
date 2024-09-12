#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
       
        cin>>n;
        long long a,b;
        
        if((n%2)||n<4)
        {
            cout<<-1<<endl;
        }
        else
        {
            long long r=0;
            if(n%4==2)
            {
                n-=6;
                r++;
            }
            b=r+(n/4);
            while(n%6)
            {
                r++;
                n-=4;
            }
            a=r+(n/6);
            cout<<a<<" "<<b<<endl;
            
        }
    }
    return 0;
}