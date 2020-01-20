#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, f, c;
    cin >> t;
    while(t--)
    {
        cin >> n;
        f = 0, c = 0;
        while(1)
        {
            if(n == 1) break;
            else if(n % 2 == 0)
            {
                n /= 2;
                c++;
            }
            else if(n % 3 == 0)
            {
                n = (2*n) / 3;
                c++;
            }
            else if(n % 5 == 0)
            {
                n = (4 * n) / 5;
                c++;
            }
            else
            {
                f = 1;
                break;
            }
        }
        if(f == 1) cout << -1 << endl;
        else cout << c << endl;
    }
}
