#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int arr[n];
        
        int count=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n==1)
        {
            cout<<0<<endl;
        }
        else 
        {
            bool check=true;
            while(check)
            {
                // count=0;
                check=false;
                for(int i=n-1;i>0;i--)
                {
                    if(arr[i]==0)
                    {
                        count=-1;
                        break;
                    }
                    else if(arr[i]<=arr[i-1])
                    {
                        arr[i-1]=arr[i-1]/2;
                        count++;
                        check=true;
                        break;
 
                    }
                }
            }
            cout<<count<<endl;
        }
        
            
            
    }
}