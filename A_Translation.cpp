#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    int f;
    f=a.size();
    
    string teymp;
    int i,j;
    for( i=0,j=f-1;i<f;i++,j--)
    {
        
            teymp += a[j];
            
        
    }
    if(teymp==b)
    {
        cout<< "YES";
    }
    else 
    cout<< "NO";

}