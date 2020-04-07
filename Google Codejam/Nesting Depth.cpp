// Partially Solved (1st Set 
// CodeJam 2020, Qualification Round, Problem B, Nesting Depth

#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)

int main()
{
    int t, cs = 1;
    sft;
    while(t--)
    {
        string s, ans = "", tmp = "";
        cin >> s;
        printf("Case #%d: ", cs++);
        int sz = s.size(), bef = 0, aft = 0;
        for(int i = 0; i < sz; )
        {
            if(s[i] == '0')
            {
                while(aft--)
                {
                    ans += ')';
                }
                aft = 0;
                ans += '0';
                i++;
            }
            else if(i == 0)
            {
                int j = i;
                while(s[j] == s[i])
                {
                    tmp += s[i];
                    j++;
                }
                int val = s[i] - '0';
                bef = val;
                aft = val;
                while(bef--)
                {
                    ans += '(';
                }
                bef = 0;
                int mov = tmp.size(); // fixing increment of i
                ans += tmp;
                tmp = "";
                i = i + mov; // repositioning i
            }
            else if(i < sz && s[i] > s[i-1])
            {
                while(aft--)
                {
                    ans += ')';
                }
                aft = 0;
                int j = i, mov = 0;
                while(s[j] == s[i])
                {
                    tmp += s[i];
                    j++;
                }
                int val = s[i] - '0';
                bef = val;
                aft = val;
                while(bef--)
                {
                    ans += '(';
                }
                ans += tmp;
                mov = tmp.size();
                tmp = "";
                i = i + mov;
            }
            else if(i < sz && s[i] < s[i-1])
            {
                int j = i;
                string todo = "";
                while(s[j] <= s[i])
                {
                    todo += s[j];
                    j++;
                }
//                int d1 = s[i] - '0';
//                int d2 = s[i-1] - '0';
//                int diff = d2 - d1;
//                aft = d2 - diff;
//
//                while(diff--)
//                {
//                    ans += ')';
//                }
//                int j = i, mov = 0;
//                while(s[j] == s[i])
//                {
//                    tmp += s[i];
//                    j++;
//                }
//                ans += tmp;
//                mov = tmp.size();
//                tmp = "";
//                i = i + mov;
            }
        }
        while(aft--)
        {
            ans += ')';
        }
        cout << ans << endl;
    }
}
