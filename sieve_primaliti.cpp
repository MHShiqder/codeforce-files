#include<bits/stdc++.h>
using namespace std;

vector<int> is_prime(int limit)
{
    limit;
    vector<int> result;
    int sieve[limit+1];
    for(int i=0;i<=limit;i++)
    {
        sieve[i]=1;
    }
    sieve[0]=sieve[1]=0;
    for(int i=2;i*i<=limit;i++){
        if(sieve[i]){
            for(int j=i*i;j<=limit;j+=i){
                sieve[j]=0;
            }
        }
    }
    for(int i=0;i<=limit;i++){
        if(sieve[i]){
            result.push_back(i);
        }
    }
    return result;
    
}
int main()
{
    int limit;
    cout<< "Enter the limit to check prime numbers"<<endl;
    cin>>limit;
    cout<< "Enter the position of prime"<<endl;
    int position;
    cin>>position;
    vector<int> prime_check;
    prime_check=is_prime(limit);
    // for(auto i:prime_check){
    //     cout<<i<<endl;
    // }
    cout<<prime_check.at(position-1)<<endl;

}