#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n, k, c = 0;
    cin >> n >> k;
    ll beg = 1, endd = n, mid;
    while(beg < endd)
    {
        c++;
        mid = (beg + endd) / 2;
        if(k > mid) beg = mid + 1;
        else endd = mid;
    }
    cout << c << endl;
}

