#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string result="NO";
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        map<int, int> frequencyMap;

    // Count the frequency of each element in the array
        for (int elem : arr) {
            frequencyMap[elem]++;
        }

         for (auto it = frequencyMap.rbegin(); it != frequencyMap.rend(); ++it) {
        if(it->second%2!=0)
        result="YES";
    }

    cout<<result<<endl;
        
    }
}