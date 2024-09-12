#include<iostream>
using namespace std;
int main()
{

    int n,a,b,c;
    int sum=0;
    cin>>n;
    cout<<endl;
    for(int i=0;i<n;i++)
    {
       cin>>a>>b>>c;
       cout<<endl;
       if(a+b+c>=2)
        {
            sum++;
        }
    }

    cout<<sum<<endl;

    return 0;
}
