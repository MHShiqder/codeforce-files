#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    
    for(int j=0;j<s.size();j++)
    {
        for(int i=0;i<s.size()-1;i+=2)
        {
            if(s[i]>s[i+2])
            {
                swap(s[i],s[i+2]);
            }
            
        }
    }
    cout<<s<<endl;



}