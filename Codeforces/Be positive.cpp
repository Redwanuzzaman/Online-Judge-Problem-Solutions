#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, pos = 0, neg = 0, zero = 0;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> k;
        if(k > 0) pos++;
        else if(k < 0) neg++;
        else zero++;
    }
    k = ceil(n/2.0);
    if(pos >= k) cout << 1 << endl;
    else if(neg >= k) cout << -1 << endl;
    else cout << 0 << endl;
}
