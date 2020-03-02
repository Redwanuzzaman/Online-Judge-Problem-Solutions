#include <bits/stdc++.h>

using namespace std;

int missingchar(string s, int n)
{
    int cnt = 0;
    for(int i = 0; i < n/2; i++)
    {
        if(s[i] != s[n-i-1])
        {
            cnt++;
        }
    }
    return cnt;
}

void highest_value_palindrome(string s, int n, int k)
{
    map <int, bool> mp;
    for(int i = 0; i < n/2; i++)
    {
        if(s[i] != s[n-i-1])
        {
            s[i] = max(s[i], s[n-i-1]);
            s[n-i-1] = max(s[i], s[n-i-1]);
            k--;
            mp[i] = true;
            mp[n-i-1] = true;
        }
    }
    if(k > 0)
    {
        for(int i = 0; i < n/2; i++)
        {
            if(k > 1)
            {
                if(!mp[i] && s[i] != '9')
                {
                    s[i] = '9';
                    s[n-i-1] = '9';
                    k -= 2;
                }
                else if(s[i] != '9')
                {
                    s[i] = '9';
                    s[n-i-1] = '9';
                    k--;
                }
            }
            else if(k == 1)
            {
                if(mp[i] && s[i] != '9')
                {
                    s[i] = '9';
                    s[n-i-1] = '9';
                    k--;
                }
            }
        }
        if(n & 1 && k > 0)
        {
            s[n/2] = '9';
        }
    }
    cout << s << endl;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    string s;
    cin >> s;

    int miss = missingchar(s, n);
    if(miss > k)
    {
        cout << -1 << endl;
    }
    else
    {
        highest_value_palindrome(s, n, k);
    }
    return 0;
}
