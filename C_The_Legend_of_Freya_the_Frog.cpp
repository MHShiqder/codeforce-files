#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,k,sum;
        cin>>x>>y>>k;
        int result1 = 2 * ((x + k - 1) / k) - 1;
        int result2 = 2 * ((y + k - 1) / k);
        cout << max(result1, result2) << endl;
    }

}