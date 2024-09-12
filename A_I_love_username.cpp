

#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int> a;
    int cnt=0;
    int b;
    cin>>b;
    a.push_back(b);
    for(int i=1; i<t; i++)
    {
        cin>>b;
        
        if (b < *min_element(a.begin(), a.end()) || b > *max_element(a.begin(), a.end()) )
        {
            cnt++;
        }
        a.push_back(b);
        
    }

    cout<<cnt<<endl;
    
    

    return 0;
}