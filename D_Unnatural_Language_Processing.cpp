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
        int cnt=0;
        vector<char>v;
        for(int i=0;i<n;i++){
            cnt++;
            v.push_back(s[i]);
            if(cnt==2 && (s[i+1]!='a'||s[i+1]!='e') && (s[i+2]=='a'||s[i+2]=='e') && i<n-1){
                v.push_back('.');
                cnt=0;
            }
            if(cnt==3 && i<n-1){
                v.push_back('.');
                cnt=0;
            }

        }
        for(auto x:v)
        {
            cout<<x;
        }
        cout<<endl;
    }
}