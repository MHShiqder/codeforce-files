#include<bits/stdc++.h>
using namespace std;
bool prime_test(long long x)
{
    if(x==1)
    {
        return false;
    }
    for(int i=2;i<=sqrt(x);i++)
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
    if(prime_test(test_case))
        {
            cout<< "It is a prime number "<<endl;
        }
    else
    {
        cout<< "It is not a prime number "<<endl;
    }
    return 0;
}
