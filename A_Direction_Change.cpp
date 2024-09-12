#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int z=0;z<n;z++)
    {
        int r,c;
        cin>>r>>c;
        if(r==c)
        {
            cout<<(r*2)-2<<endl;
        }
        if(r>c)
        {
            if(c==1&&r>c+2)
            {
                cout<<-1<<endl;
            }
            else
            {
                for(int i=0;i<1000000000;i++)
                {
                    int rr=0,cc=0,flag=0;
                    if(rr!=r && cc!=c && cc<=c)
                    {
                        if(flag==0)
                        rr++;
                        else
                        cc++;
                    }
                    else if(cc==c && rr==r)
                    {
                        cout<<i;
                        break;
                    }
                    else
                    {
                        cc-=2;
                    }
                    
                }
            }
        }
         if(c>r)
        {
            if(r==1&&c>r+2)
            {
                cout<<-1<<endl;
            }
            else
            {
                for(int i=0;i<1000000000;i++)
                {
                    int cc=0,rr=0,flag=0;
                    if(cc!=c && rr!=r && rr<=r)
                    {
                        if(flag==0)
                        cc++;
                        else
                        rr++;
                    }
                    else if(rr==r && cc==c)
                    {
                        cout<<i;
                        break;
                    }
                    else
                    {
                        rr-=2;
                    }
                    
                }
            }
        }

    }

}