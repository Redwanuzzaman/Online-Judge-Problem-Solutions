#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test, len, i;
    cin >> test;
    while(test--)
    {
        string s;
        cin >> len >> s;
        for(i = 0; i < len; i++)
        {
            if(s[i] != s[len-1-i] && (abs(s[i] - s[len-1-i]) != 2))
            {
                cout << "NO" << endl;
                break;
            }
        }
        if(i > len/2) cout << "YES" << endl;
    }
}
