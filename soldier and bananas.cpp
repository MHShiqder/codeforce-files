#include<bits/stdc++.h>
using namespace std;
int main()
{

    int k,total,num_w,own_n;
    cin>>k>>own_n>>num_w;
    total=0;
    //total=(num_w/2)*(2*k+((num_w-1)*k));
    for(int i=1;i<=num_w;i++)
    {
        total=total+(i*k);
    }

    if(total>own_n)
        cout<<total-own_n<<endl;
    else
        cout<<0;

}

