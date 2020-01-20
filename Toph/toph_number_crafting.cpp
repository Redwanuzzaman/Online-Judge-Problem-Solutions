#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int arr[n], mn = INT_MAX, sum = 0, div;

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mn = min(mn, arr[i]);
            sum += arr[i];
        }
        div = sum / mn;
        vector <int> v;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == div) v.push_back(i+1);
        }
        if(v.size() == 0) cout << "NULL\n";
        else
        {
            for(int i = 0; i < v.size()-1; i++)
                cout << v[i] << " ";
            cout << v[v.size()-1] << endl;
        }
    }
}
