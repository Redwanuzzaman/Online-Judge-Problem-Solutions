#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, r, s1 = 0, s2 = 1;
    cin >> n >> l >> r;
    int othr = n - l + 1;
    s1 = othr * 1;
    for(int i = 1; i <= n-othr; i++)
    {
        s1 += pow(2, i);
    }
    s2 = (n - r) * pow(2, r-1) + pow(2, r) - 1;
    cout << s1 << " " << s2 << endl;
}
