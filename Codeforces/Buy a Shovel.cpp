#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, r, res;
    cin >> k >> r;
    for(int i = 1; i < 10; i++)
    {
        res = k * i;
        if(res % 10 == 0 or res % 10 == r) return cout << i << endl, 0;
    }
}
