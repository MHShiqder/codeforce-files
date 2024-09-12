#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0,i,j;
    int arr[4];
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }
    for( i=0;i<4;i++)
    {
        if(arr[i]==-1)
        continue;
        for( j=i+1;j<4;j++)
        {

            if(arr[i]==arr[j])
            {
                sum++;
                arr[j]=-1;
            }
        }
    }
    cout<<sum;
}