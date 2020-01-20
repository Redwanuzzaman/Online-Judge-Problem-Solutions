#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, len, q, ix;
    char c;
    string str;
    cin >> t;
    while(t--)
    {
        cin >> len >> q >> str;
        int unmatched = 0, res = 0;
        for(int i = 0; i < len/2; i++)
        {
            if(str[i] != str[len-i-1])
            {
                unmatched++;
            }
        }
        while(q--)
        {
            cin >> ix >> c;
            --ix;
            if(str[ix] != c)
            {
                if(str[ix] == str[len-ix-1])
                {
                    unmatched++;
                }
                str[ix] = c;
                if(str[ix] == str[len-ix-1])
                {
                    unmatched--;
                }
            }
            if(unmatched == 0)
            {
                res++;
            }
        }
        cout << res << endl;
    }
}

