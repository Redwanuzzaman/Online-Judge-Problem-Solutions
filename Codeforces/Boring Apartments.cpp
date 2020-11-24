#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, val, len;
    string num;
    cin >> t;
    while(t--)
    {
        cin >> num;
        val = num[0] - 48;
        val = (val - 1) * 10;
        len = num.size();
        val += ((len * (len + 1)) / 2);
        cout << val << endl;
    }
}
