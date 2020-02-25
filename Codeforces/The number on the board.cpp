#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, dec, sum = 0, l, newsum = 0;
    string s;
    cin >> n >> s;
    l = s.size();
    int arr[l+1];
    sort(s.begin(), s.end());
    for(int i = 0; i < l; i++)
    {
        dec = s[i] - '0';
        arr[i] = dec;
        sum += dec;
    }
    if(sum >= n) return cout << 0 << endl, 0;
    else
    {
        for(int i = 0; i < l; i++)
        {
            sum -= arr[i];
            sum += 9;
            if(sum >= n) return cout << i+1 << endl, 0;
        }
    }
}
