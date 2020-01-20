#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, mod = 1, idx = 0;
    cin >> n;
    while(n)
    {
        idx += mod;
        if(n % 10 == 7)
        {
            idx += mod;
        }
        n /= 10;
        mod *= 2;
    }
    cout << idx << endl;
}
