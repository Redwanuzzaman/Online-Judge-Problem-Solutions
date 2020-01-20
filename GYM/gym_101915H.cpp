#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        vector <int> v;
        while(n--)
        {
            int arr[3];
            for(int i = 0; i < 3; i++) cin >> arr[i];
            sort(arr, arr+3);
            v.push_back(arr[0]);
            v.push_back(arr[1]);
        }
        sort(v.begin(), v.end());
        int sum = 0;
        for(int i = 0; i < k; i++)
        {
            sum += v[i];
        }
        cout << sum << endl;
    }
}
