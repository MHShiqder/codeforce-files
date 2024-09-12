#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,sum5,sum4,sum3,sum2,sum1,sum,temp;
    cin>>x;
    sum5=x/5;
    temp=x%5;
    sum4=temp/4;
    temp=temp%4;
    sum3=temp/3;
    temp=temp%3;
    sum2=temp/2;
    temp=temp%2;
    sum1=temp/1;
    sum=sum5+sum4+sum3+sum2+sum1;
    cout<<sum<<endl;


}
