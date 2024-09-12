#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,max;
        cin>>n>>m;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        max=*max_element(arr, arr + n);
        while(m--)
        {
            int l,r;
            char c;
            cin>>c>>l>>r;
            if(c=='+')
            {
                
                if(max<=r && max>=l)
                max++;
                cout <<max<<' ';
            }
            else
            {
                
                if(max<=r && max>=l)
                max--;
                cout <<max<<' ';
            }
            
        }
        cout<<endl;
    }
}