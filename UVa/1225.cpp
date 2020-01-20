#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, c = 0, arr[10], x, y;
    string s;
    cin >> t;
    while(t--)
    {
        memset(arr, 0, sizeof arr);
        cin >> n;
        s = "";

        for(int i = 1; i <= n; i++)
        {
            stringstream ss;
            ss << i;
            s += ss.str();
        }
        for(int i = 0; i < s.size(); i++)
        {
            y = s[i] - '0';
            arr[y]++;
        }
        for(int i = 0; i < 9; i++) cout << arr[i] << " ";
        cout << arr[9] << endl;
    }
}
