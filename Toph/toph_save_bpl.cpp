#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)

int main()
{
    int t, res = 0;
    sft;
    while(t--)
    {
        string s;
        cin >> s;
        int mn = INT_MAX;
        for(int i = 0; i < s.size(); i++)
        {
            int sum = 0, c = 0;
            for(int j = i; ; j++)
            {
                sum += (s[j] - 96);
                cout << s[j] - 96 << " ";
                if(j == s.size()-1) j = 0;
                c++;
                if(c == 15) break;
            }
            mn = min(mn, sum);
        }
        //cout << mn << endl;
        res += mn;
    }
    //cout << res << endl;
}
