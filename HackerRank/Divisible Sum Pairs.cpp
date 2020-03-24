// O(nlogn) Solution

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, ans = 0;
    cin >> n >> k;
    int arr[n];
    vector <int> v[k+1];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        int mod = arr[i] % k;
        v[mod].push_back(i);
    }
    for(int i = 0; i < n; i++)
    {
        int rem = k - (arr[i] % k);
        if(rem == k)
        {
            rem = 0;
        }
        if(v[rem].empty())
        {
            continue;
        }
        else
        {
            auto itr = upper_bound(v[rem].begin(), v[rem].end(), i);
            int pos = itr - v[rem].begin();
            if(pos >= v[rem].size())
            {
                continue;
            }
            ans += v[rem].size() - pos;
        }
    }

    cout << ans << endl;
}


