#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, q, type, x, y, seq, la = 0, val;
    cin >> n >> q;
    vector <long long> v[n+2];
    for(int i = 0; i < q; i++)
    {
        cin >> type >> x >> y;

        if(type == 1)
        {
            seq = ((x ^ la) % n);
            v[seq].push_back(y);
        }
        else
        {
            seq = ((x ^ la) % n);
            val = y % v[seq].size();
            la = v[seq][val];
            cout << la << endl;
        }
    }
}
