#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sum=0,i,j,temp=0,x;
    cin>>n;
    while(n!=0)
    {
        j=n%10;
        n=n/10;
        if(j==4||j==7)
        {
            sum++;
        }
    }
    x=sum;
    while(sum!=0)
    {
        i=sum%10;
        sum=sum/10;
        if(i!=4&&i!=7)
        {
            temp=1;
            break;
        }
    }
    if(temp==1||x==0)
        {
            cout<< "NO"<<endl;
        }

    else
        {
            cout<< "YES"<<endl;
        }

}
