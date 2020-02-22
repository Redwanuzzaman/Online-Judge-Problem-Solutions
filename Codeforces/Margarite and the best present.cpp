#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, l , r, k, rev, init;
    cin >> n;
    while(n--)
    {
        cin >> l >> r;
        k = (r-1) / 2;
        rev = (k * k) + 2 * k + 1;
        if(l >= 2)
        {
            k = (l-2) / 2;
            rev = rev -  ((k * k) + 2 * k + 1);
        }

        k = r/2;
        init = k*k + k;

        k = (l-1) / 2;
        init = init - ((k * k) + k);
        rev *= -1;

        cout << init + rev << endl;
    }
}
