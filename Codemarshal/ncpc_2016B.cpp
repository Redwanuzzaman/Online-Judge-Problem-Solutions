#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t, x, y, cs = 1;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> x >> y >> s;
        ll tmp = abs(y - x);
        ll mod;
        if(y >= x)
        {
            mod = tmp % 7;
        }
        else
        {
            ll tmp2 = abs(x - y) % 7;
            if(tmp2 == 0) mod = 0;
            else mod = 7 - tmp2;
        }
        cout << "Case " << cs++ << ": ";
        if(s == "FRIDAY")
        {
            string arr[7] = {"FRIDAY", "SATURDAY", "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY"};
            cout << arr[mod] << endl;
        }
        else if(s == "SATURDAY")
        {
            string arr[7] = {"SATURDAY", "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY"};
            cout << arr[mod] << endl;
        }
        else if(s == "SUNDAY")
        {
            string arr[7] = {"SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"};
            cout << arr[mod] << endl;
        }
        else if(s == "MONDAY")
        {
            string arr[7] = {"MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY"};
            cout << arr[mod] << endl;
        }
        else if(s == "TUESDAY")
        {
            string arr[7] = {"TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY", "MONDAY"};
            cout << arr[mod] << endl;
        }
        else if(s == "WEDNESDAY")
        {
            string arr[7] = {"WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY", "MONDAY", "TUESDAY"};
            cout << arr[mod] << endl;
        }
        else
        {
            string arr[7] = {"THURSDAY", "FRIDAY", "SATURDAY", "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY"};
            cout << arr[mod] << endl;
        }
    }
}
