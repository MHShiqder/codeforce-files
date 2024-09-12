#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<2)
        {
            int x;
            cin>>x;
            cout<<-1<<endl;
        }
        
        else 
        {
            int arr[n],prr[n];
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
                prr[i]=arr[i];
            }
            sort(prr,prr+n);
            int count=1;
            while(count)
            {
                count=0;
                for(int i=1;i<n-1;i++)
                    {
                        if(prr[i]==arr[i])
                        {
                            swap(prr[i],prr[i+1]);
                        }
                        
                    }
                    if(prr[0]==arr[0])
                        {
                            swap(prr[0],prr[n-1]);
                        }
                    if(prr[n-1]==arr[n-1])
                        {
                            swap(prr[n-1],prr[n-2]);
                        }
                for(int i=n-1;i>=0;i--)
                    {
                        if(prr[i]==arr[i])
                        {
                            count=1;
                            break;
                        }
                        
                    }
            }
            
            for(int i=0;i<n;i++)
            {
                cout<<prr[i]<< " ";
            }
            cout<<endl;
        }
        

    }

}