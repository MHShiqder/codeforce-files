#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,x=0;
    cin>>n;
    string arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]=="X++"||arr[i]=="++X"||arr[i]=="++")
        {
            x++;
        }
        else if(arr[i]=="X--"||arr[i]=="--X"||arr[i]=="--")
        {
            x--;
        }
    }
    cout<<endl<<x<<endl;
}
