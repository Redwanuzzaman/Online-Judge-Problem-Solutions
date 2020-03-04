#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, one = 0, two = 0, res = 0;
    cin >> n;
    while(n--)
    {
        cin >> x;
        (x == 2) ? two++ : one++;
    }
    while(one && two)
    {
        one--;
        two--;
        res++;
    }
    res += one/3;
    cout << res << endl;
}
