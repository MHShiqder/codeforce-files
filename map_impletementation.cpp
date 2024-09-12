#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int> m;
    string str="bibihihinisdshinisosljd" ;
    for(int i=0;i<str.size();i++)
    {
        m[str[i]]++;

    }
    m['b']--;
    m.insert({'x',10});
    m['x']+=20;
    for(auto i:m)
    {
        cout<<i.first<< "  "<<i.second<<endl;
    }
    
}