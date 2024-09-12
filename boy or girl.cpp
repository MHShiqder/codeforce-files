#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int i,j=0,k,sum,l=0,f;
    cin>>s;
    sum=s.length();
    char a[s.length()];
    for(i=0;i<s.length();i++)
    {

        for(j=0;j<sizeof(a);j++)
        {
            if(s[i]==a[j])
            {
                continue;
            }
        }
        for(k=1;k<s.length();k++)
        {
            if(s[i]==s[k])
            {
                sum--;
                a[l]=s[i];
                l++;
            }
        }




    }
    if(sum%2!=0)
    {
        cout<< "IGNORE HIM!"<<endl;
    }
    else
    {
        cout<< "CHAT WITH HER!"<<endl;
    }
}
