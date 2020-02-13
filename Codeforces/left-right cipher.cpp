#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int len, n, l = 1, m = 1, k;
    len = s.size();
    if(len % 2 == 0) n = len/2 - 1;
    else n = len/2;
    cout << s[n];
    for(int i = 1; i < len; i++)
    {
        if(i % 2 == 1)
        {
            cout << s[n+l];
            l++;
        }
        else
        {
            cout << s[n-m];
            m++;
        }
    }
}
