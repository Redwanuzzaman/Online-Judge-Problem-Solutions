#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, w, h, n;
    cin >> t;
    while(t--)
    {
        cin >> w >> h >> n;
        int counter = 1;
        if(w % 2 == 0 and h % 2 == 0)
        {
            int tmp = max(w, h);
            while(tmp % 2 == 0)
            {
                counter *= 2;
                tmp /= 2;
            }
            tmp = min(w, h);
            while(tmp % 2 == 0)
            {
                counter *= 2;
                tmp /= 2;
            }
        }
        else
        {
            while(w % 2 == 0)
            {
                counter *= 2;
                w /= 2;
            }
            while(h % 2 == 0)
            {
                counter *= 2;
                h /= 2;
            }
        }
        (counter < n) ? cout << "NO\n" : cout << "YES\n";
    }
}
