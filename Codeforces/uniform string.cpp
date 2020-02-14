#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, k;
    cin >> t;
    string s = {"abcdefghijklmnopqrstuvwxyz"};
    while(t--)
    {
        string res = "",s2 = "";
        cin >> n >> k;
        for(int i = 0; i < k; i++)
        {
            res += char(97) + i;
        }
        for(int i = 0, j = 0; i < n; i++, j++)
        {
            if(j == k) j = 0;
            s2 += res[j];
        }
        cout << s2 << endl;
    }
}
