#include <bits/stdc++.h>
using namespace std;

int main()
{
    int prisoners, limit, required, crime, ans = 0, cnt = 0;
    cin >> prisoners >> limit >> required;
    while(prisoners--)
    {
        cin >> crime;
        if(crime <= limit)
        {
            cnt++;
        }
        else
        {
            cnt = 0;
        }
        if(cnt >= required)
        {
            ans++;
        }
    }
    cout << ans << endl;
}
