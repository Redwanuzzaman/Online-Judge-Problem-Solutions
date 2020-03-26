#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, n, x;

    cin >> test;
    while(test--)
    {
        cin >> n;
        vector <int> v;
        for(int i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end(), greater<int>());

        for(int i = 0; i < n-1; i++)
            cout << v[i] << " ";
            cout << v[n-1] << endl;
    }
}
