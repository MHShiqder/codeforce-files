#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int> frequencyMap;
        for(int i=0;i<n;i++)
        {
            frequencyMap[s[i]]++;
        }
        
        if((frequencyMap['D']%2==0 && n%2==0) || (frequencyMap['D']%2==1 && n%2==1))
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}