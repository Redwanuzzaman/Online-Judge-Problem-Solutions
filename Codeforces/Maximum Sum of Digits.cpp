#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, t1 = 0, t2, tmp, len, sum = 0, k;
    string s = "";
    cin >> n;
    if(n % 9 == 0 && n < 100 && n != 9) return cout << "18" << endl, 0;
    if(n < 100)
    {
        t1 = n/2+1;
        t2 = n-t1;
    }
    else
    {
        k = n;
        while(n)
        {
            s +=  (n % 10) - '0';
            n /= 10;
        }
        reverse(s.begin(), s.end());
        len = s.size() - 2;
        for(int i = len; i >=1; i--)
            t1 += (9 * ceil(pow(10,i)));
        t1 += 9;
        t2 = k - t1;
    }
    while(t1)
    {
        tmp = t1 % 10;
        sum += tmp;
        t1 /= 10;
    }
    while(t2)
    {
        tmp = t2 % 10;
        sum += tmp;
        t2 /= 10;
    }
    cout << sum << endl;
}
