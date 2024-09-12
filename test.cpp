#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b; 
    cin >>a>>b;
    char arr[a][b];
    int brr[a]={0,0,0,0,0};
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            if(arr[i][j]=='#')
            {
                brr[i]++;
            }
        }
    }
    int max=*max_element(brr,brr+a);
    int first;
    for(int i=0;i<a;i++)
    {
        if(brr[i]==max)
        {
            first=i;
        }
    }
    int second;
    for(int i=0;i<b;i++)
    {
        if(arr[first][i]=='#')
        {
            second=i+(max/2)+1;
        }
    }
    cout<<first+1<<" "<<second<<endl;
    
}