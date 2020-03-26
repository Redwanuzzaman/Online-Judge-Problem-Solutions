#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)

int main()
{
    int t, n;
    sft;
    while(t--)
    {
        int chk = 0, one = 0, two = 0;
        sfn;
        string s, s1 = "", s2 = "";
        cin >> s;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '2')
            {
                s1 += '1';
                s2 += '1';
            }
            else if(s[i] == '1')
            {
                s1 += '1';
                s2 += '0';
                if(chk == 0)
                {
                    chk = i;
                }
            }
            else
            {
                s1 += '0';
                s2 += '0';
            }
        }
        if(chk != 0)
        {
            for(int i = chk+1; i < n; i++)
            {
                if(s[i] == '1')
                {
                    s1[i] = '0';
                    s2[i] = '1';
                }
                else if(s[i] == '2')
                {
                    s1[i] = '0';
                    s2[i] = '2';
                }
            }
        }
        cout << s1 << endl << s2 << endl;
    }
}
