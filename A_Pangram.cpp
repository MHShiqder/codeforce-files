#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char s[n];
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
    }
    int x=1;
    
    if(n<=25)
    {
        cout<< "NO"<<endl;
    }
    else 
    {

        for(int i=65;i<91;i++)
        {
            int flag=0;
            for(int k=0;k<n;k++)
            {
                char ch= toupper(s[k]);
                int m= int(ch);      
                if(i==m )
                {
                    flag=1;
                    break;
                    
                }
                
            }
            if(flag==0)
            { 
                x=8;
                break;
            }
            
        }

        if(x==8)
        {
            cout<< "NO"<<endl;
        }
        else
        cout<< "YES"<<endl;

    }
    

    
}