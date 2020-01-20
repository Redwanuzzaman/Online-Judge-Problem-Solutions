#include <bits/stdc++.h>
using namespace std;

bool isLeapYear(int year)
{
    if (year % 400 == 0) return true;
    else if(year % 100 == 0) return false;
    else if(year % 4 == 0) return true;
    else return false;
}

int main()
{
    int t, d, m, y, tar;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int cnt = 0;
        cin >> d >> m >> y >> tar;
        if(d == 29 && m == 2)
        {
            for(int j = y+4; j <= tar; j += 4)
            {
                bool res = isLeapYear(j);
                if(res) cnt++;
            }
            cout << "Case " << i << ": " << cnt << endl;
        }
        else cout << "Case " << i << ": " << tar-y << endl;
    }
}
