#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> arr;
        int n, r=0, m = 1, sum = 0;
        cin >> n;
        while (n != 0)
        {
            m = m * 10;
            r = n % m;
            if (r != 0)
            {
                sum++;
                arr.push_back(r);
                n = n - r;
            }
        }
        cout << sum << endl;
        for (size_t i = 0; i < arr.size(); ++i)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}