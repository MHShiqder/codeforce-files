#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int n,b,r,j;
        cin>>n>>r>>b;
        char arr[n];
        int x,d,g,f;
        x=b+1;
        d=r/x;
        g=r%x;
        f=d+1;      
        for(int k=0;k<n;k++)
        {
            arr[k]='R';
        }



        if(g!=0)
        {
            j=f;
           while (j<n)
        {              
            arr[j]='B';
            if(j<=(f*g)+g-1&&g!=1)
            {
                j=j+f+1;
            }
            else
            {
                j=j+f;
            }
        }
        for(int k=0;k<n;k++)
        {
            cout<<arr[k];
        }
        cout<<endl;         
        }



        else
        {

            j=f-1;
        while (j<n)
        {               
            arr[j]='B';
            j=j+f;            
        }
        for(int k=0;k<n;k++)
        {
            cout<<arr[k];
        }
        cout<<endl;

        }
        
    }
    return 0;
}


                        // cout<<endl;
                        // for(int k=0;k<n;k++)
                        // {
                        //     cout<<arr[k];
                        // }
                        // cout<<endl;
                        // cout<<endl;

