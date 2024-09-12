#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,min_cap=0,a,b,sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        sum=sum-a+b;
        if(sum>min_cap){
            min_cap=sum;
        }

    }
    cout<<min_cap;
    return 0;

}