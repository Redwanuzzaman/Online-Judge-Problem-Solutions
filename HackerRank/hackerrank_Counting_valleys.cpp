#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, v = 0, res = 0, down = 0;
    string s;
    cin >> n >> s;

    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'U')
        {
            v++;
        }
        else
        {
            v--;
        }
        if(v == 0) down = 0;
        if(v < 0 && down == 0)
        {
            res++;
            down = 1;
        }

    }
    cout << res << endl;
}
