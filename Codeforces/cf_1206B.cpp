#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, cnt = 0, neg = 0, x, mo = 0;
    cin >> n;
    while(n--)
    {
        cin >> x;
        if(x == 0)
        {
            mo++;
            cnt++;
        }
        else if(x > 0)
        {
            cnt += (x - 1);
        }
        else if(x < 0)
        {
            neg++;
            cnt += (- 1 - x);
        }
    }
    if((neg & 1) && (!mo))
    {
        cnt += 2;
    }
    cout << cnt << endl;
}
