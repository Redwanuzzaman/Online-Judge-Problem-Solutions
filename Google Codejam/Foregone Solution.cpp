// 2019 Codejam Round 0, Problem A

#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)

int main()
{
    int t, cs = 1;
    sft;
    while(t--)
    {
        string s, s1 = "", s2 = "";
        cin >> s;
        printf("Case #%d: ", cs++);

        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] == '4')
            {
                s1 += '3';
                s2 += '1';
            }
            else
            {
                s1 += s[i];
                s2 += '0';
            }
        }
        cout << s1 << " " << s2 << endl;
    }
}
