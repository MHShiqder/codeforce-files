#include<bits/stdc++.h>
using namespace std;
void prime_sieve(int x){
    
     for(int i=2;i*i<=x;i++){
         if(x%i==0){
            int count=0;
            while(x%i==0){
                count++;
                x/=i;
            }
            cout<<i<<"^"<<count<<endl;
         }
     }
     if(x>1){
         cout<<x<< "^"<<1<<endl;
     }
}

int main()
{
    int number;
    cout<< "Enter the number"<<endl;
    cin>>number;
    prime_sieve(number);
}