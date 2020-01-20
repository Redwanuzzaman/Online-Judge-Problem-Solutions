#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, k;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        long long c = 0;
        if(k > n) cout << n << endl;
        else
        {
            while(n)
            {
                if(n % k == 0)
                {
                    n /= k;
                    c++;
                }
                else
                {
                    c += n % k;
                    n -= n % k;
                }
            }
            cout << c << endl;
        }
    }
}
