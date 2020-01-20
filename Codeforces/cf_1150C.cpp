#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, one = 0, two = 0;
    cin >> n;
    while(n--)
    {
        cin >> x;
        if(x == 1) one++;
        else two++;
    }

    if(two >= 1) cout << 2 << " ";
    --two;
    if(one >= 1) cout << 1 << " ";
    --one;
    if(two >= 1) while(two--) cout << 2 << " ";
    if(one >= 1) while(one--) cout << 1 << " ";
}
