#include <bits/stdc++.h>
using namespace std;

string toBinary(int n)
{
    string bin = "";
    while(n)
    {
        if(n % 2 == 0)
        {
            bin += '0';
        }
        else
        {
            bin += '1';
        }
        n /= 2;
    }
    return bin;
}

int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        string s1, s2;

        s1 = toBinary(n);
        s2 = toBinary(n-1);
        int cnt = 0;
        int mn = min(s1.size(), s2.size());
        //cnt = abs(s1.size() - s2.size());
        for(int i = 0; i < mn; i++)
        {
            if(s1[i] != s2[i])
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}
