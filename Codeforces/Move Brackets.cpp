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
        sfn;
        string s;
        cin >> s;
        stack <char> stk;
        int c = 0;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == ')' and stk.empty())
            {
                c++;
            }
            else if(s[i] == ')')
            {
                stk.pop();
            }
            else
            {
                stk.push(s[i]);
            }
        }
        cout << c << endl;
    }
}
