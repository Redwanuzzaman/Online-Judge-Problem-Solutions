#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)

int main()
{
    int n, cnt = 0, opening = 0, closing = 0;
    sfn;
    string s;
    cin >> s;
    stack <char> stk;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(')
        {
            opening++;
        }
        else
        {
            closing++;
        }
        if(s[i] == ')' and stk.empty())
        {
            cnt++;
        }
        else if(s[i] == ')')
        {
            stk.pop();
        }
        else
        {
            stk.push('(');
        }
    }
    if((opening == closing) and (stk.empty() or cnt == 1))
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}
