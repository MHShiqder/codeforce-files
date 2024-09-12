#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s,mid,f;

    string str;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int test=0;
        cin>>str;
        s=str.size();
        if(s&1)
        {
            cout<<"NO"<<endl;
        }
        else{
            mid=s/2;
            f=mid;
            for(int j=0;j<mid;j++,f++)
            {
                if(str[j]!=str[f])
                {
                    test=1;
                    break;
                }


            }
            if(test==0)
                cout<<"YES"<<endl;
            else
                cout<< "NO"<<endl;
        }
    }
    return 0;
}
