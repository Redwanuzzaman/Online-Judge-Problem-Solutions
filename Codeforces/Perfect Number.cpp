#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, init = 19, tmp, pn;
    cin >> n;
    while(1)
    {
        tmp = init;
        pn = 0;
        while(tmp)
        {
            pn += (tmp % 10);
            tmp /= 10;
        }
        if(pn == 10) n--;
        if(n == 0) return cout << init << endl, 0;
        init++;
    }
}
