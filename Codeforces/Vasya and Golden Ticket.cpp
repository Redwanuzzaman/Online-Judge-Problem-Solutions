#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum1 = 0;
    string s;
    cin >> n >> s;

    for(int i = 0; i < n-1; i++)
    {
        sum1 += s[i] - '0';
        bool seg = true;
        int pos = i + 1, sum2 = 0;
        while(pos < n)
        {
            sum2 = s[pos] - '0';
            pos++;
            while(pos < n && (sum2 + s[pos] - '0' <= sum1))
            {
                sum2 += s[pos] - '0';
                pos++;
            }
            if(sum1 != sum2) seg = false;
        }
        if(sum1 != sum2) seg = false;
        if(seg) return cout << "YES" << endl, 0;
    }
    cout << "NO" << endl;
}
