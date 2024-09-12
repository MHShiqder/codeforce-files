#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
            int n;
    cin>>n;

    set<long long> st;
    for(int i=1;i<=100000;i++)
    {
        long long temp;
        temp=i*i;
        if(temp<=n)
        {
            st.insert(temp);
        }
        else
            break;
    }
    for(int i=1;i<=100000;i++)
    {
        long long temp;
        temp=i*i*i;
        if(temp<=n)
        {
            st.insert(temp);
        }
        else
            break;
    }
    cout<<st.size()<<endl;

    }

    return 0;
}
