#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string arr[n];
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]=="Tetrahedron")
        cnt+=4;
        else if(arr[i]=="Cube")
        cnt+=6;
        else if(arr[i]=="Octahedron")
        cnt+=8;
        else if(arr[i]=="Dodecahedron")
        cnt+=12;
        else if(arr[i]=="Icosahedron")
        cnt+=20;
    }
    cout<<cnt<<endl;
    
}