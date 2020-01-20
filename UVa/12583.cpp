#include <bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("output.txt", "w", stdout);
    int t, psn, rem, cs = 1, cnt = 0;
    string s;
    cin >> t;
    while(t--)
    {
        cnt = 0;
        int flag[505] = {0};
        cin >> psn >> rem >> s;
        for(int i = 0; i < psn; i++)
        {
            for(int j = i+1; j < i+1+rem && j < psn; j++)
            {
                if(s[j] == s[i] && !flag[j])
                {
                    cnt++;
                    flag[j] = 1;
                }
            }
        }
        cout << "Case " << cs++ << ": " << cnt << endl;
    }
}
