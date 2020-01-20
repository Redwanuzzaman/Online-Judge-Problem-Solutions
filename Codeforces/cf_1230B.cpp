#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    if(k == 1 && n == 1)
    {
        s[0] = '0';
    }
    else
    {
        int i = 0;
        while(k > 0 && i < n)
        {
            if(i == 0)
            {
                if(s[i] != '1')
                {
                    s[i] = '1';
                    k--;
                }
                i++;
            }
            else
            {
                if(s[i] != '0')
                {
                    s[i] = '0';
                    k--;
                }
                i++;
            }
        }
    }
    cout << s << endl;
}
