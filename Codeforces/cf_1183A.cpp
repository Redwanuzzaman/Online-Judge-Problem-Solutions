#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, t, sum = 0, i = 1;
    cin >> a;
    t = a;
    while(a)
    {
        sum += a % 10;
        a /= 10;
    }
    if(sum % 4 == 0) cout << t << endl;
    else
    {
        while(1)
        {
            int r = t, sum2 = 0;
            r += i;
            while(r)
            {
                sum2 += r % 10;
                r /= 10;
            }
            if(sum2 % 4 == 0)
            {
                cout << t+i << endl;
                break;
            }
            else i++;
        }
    }
}
