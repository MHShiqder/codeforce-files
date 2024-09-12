#include<bits/stdc++.h>
using namespace std;
bool prime_test(long long x)
{
    if(x==1)
    {
        return false;
    }
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    long long test_case;
    cin>>test_case;
    cout<<prime_test(test_case)<<endl;

}
