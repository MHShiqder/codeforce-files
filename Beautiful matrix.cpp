#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,N,M,sum;
    int i[5][5];
    for(M=0;M<5;M++)
    {
        for(N=0;N<5;N++)
        {
            cin>>i[M][N];
        }
    }
    for(M=0;M<5;M++)
    {
        for(N=0;N<5;N++)
        {
            if(i[M][N]==1)
            {
                a=M+1;
                b=N+1;
            }

        }

    }

    sum=abs(a-3)+abs(b-3);
    cout<<sum<<endl;
}
