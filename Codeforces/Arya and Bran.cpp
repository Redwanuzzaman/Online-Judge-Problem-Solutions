#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, daily, sum = 0, rem = 0, cnt = 0;
    cin >> n >> k;
    while(n--)
    {
        cin >> daily;
        if(daily > 8)
        {
            rem += daily - 8;
            sum += 8;
        }
        else
        {
            rem += daily;
            if(rem > 8)
            {
                sum += 8;
                rem -= 8;
            }
            else
            {
                sum += rem;
                rem = 0;
            }
        }
        cnt++;
        if(sum >= k) return cout << cnt << endl, 0;
    }
    cout << -1 << endl;
}
