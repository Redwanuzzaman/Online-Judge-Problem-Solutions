#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    while(cin >> s)
    {
        int res = 0;
        for(int i = 0; i < s.size(); i++)
        {
            res += s[i] - '0';
        }
        cout << res << endl;
    }

}

