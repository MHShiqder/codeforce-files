
#include<bits/stdc++.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    long long int t,x,y,sum;

    cin>>t;
    long long int arr[t];
    for(long long int j=0;j<t;j++)
    {
        cin>>y>>x;
        sum=1;
        long long int cnt=0;
        if(y==x)
        {
            sum=(y*y)-(y-1);
            arr[j]=sum;
        }
        else if(y<x)
        {
            if(x&1)
            {
                sum=(x*x)-(x-1);
                arr[j]=sum+(x-y);
            }
            else
            {
                sum=(x*x)-(x-1);
                arr[j]=sum-(x-y);
            }
        }
        else
        {
            if(y&1)
            {
                sum=(y*y)-(y-1);
                arr[j]=sum-(y-x);
            }
            else
            {
                sum=(y*y)-(y-1);
                arr[j]=sum+(y-x);
            }
        }
    }

    for(long long int j=0;j<t;j++)
        {
           cout<<arr[j]<<endl;
        }


        return 0;
}
