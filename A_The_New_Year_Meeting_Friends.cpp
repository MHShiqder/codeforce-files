#include<bits/stdc++.h>
using namespace std;
int main()
{

   int x1,x2,x3,sum,midValue;
   cin>>x1>>x2>>x3;
    if ((x1 > x2 && x1 < x3) || (x1 < x2 && x1 > x3)) {
        midValue = x1;
    } else if ((x2 > x1 && x2 < x3) || (x2 < x1 && x2 > x3)) {
        midValue = x2;
    } else {
        midValue = x3;
    }
   sum=abs(midValue-x1)+abs(midValue-x2)+abs(midValue-x3);
   cout<<sum<<endl;


}