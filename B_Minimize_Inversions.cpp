#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],brr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>brr[i];
        }
        map <int,int> frequencyMap;
        for(int i=0;i<n;i++)
        {
            frequencyMap[arr[i]]=brr[i];
        }
        
        for (auto it : frequencyMap) {
            cout << it.first << " ";
        }
        cout<<endl;
        for (auto it : frequencyMap) {
            cout <<it.second<< " ";
        }
        cout<<endl;
    }
}