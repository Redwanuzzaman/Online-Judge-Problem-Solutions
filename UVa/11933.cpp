#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sfn scanf("%lld",&n)

int main()
{
    ll t, n;
    while(sfn && n)
    {
        t = n;
        ll evn = 0, pr = 0, num = 0;
        while(t)
        {
            if(t % 2 == 1)
            {
                evn++;
                if(evn % 2 == 1) num += pow(2,pr);
            }
            t /= 2;
            pr++;
        }
        cout << num << " " << n - num << endl;
    }
}
