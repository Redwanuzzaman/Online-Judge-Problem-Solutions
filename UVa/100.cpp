#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, tmp, cnt, res = 0;
    while(cin >> n >> m && n && m)
    {
        res = 0;
        cout << n << " " << m << " ";
        if(n > m) swap(n, m);
        while(n <= m)
        {
            cnt = 0;
            tmp = n;
            while(1)
            {
                if(tmp == 1)
                {
                    cnt++;
                    break;
                }
                if(tmp % 2 == 0) tmp /= 2;
                else tmp = (tmp * 3) + 1;
                cnt++;
            }
            res = max(res, cnt);
            n++;
        }
        cout << res << endl;
    }
}
