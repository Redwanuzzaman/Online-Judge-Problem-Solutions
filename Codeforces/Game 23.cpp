#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, cnt = 0, div;
    cin >> n >> k;
    if(k % n != 0) return cout << -1 << endl, 0;
    k /= n;
    while(k % 3 == 0)
    {
        k /= 3;
        cnt++;
    }
    while(k % 2 == 0)
    {
        k /= 2;
        cnt++;
    }
    if(k == 1) cout << cnt << endl;
    else cout << -1 << endl;
}
