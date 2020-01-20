#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    stack <char> stk;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(stk.empty())
        {
            stk.push(s[i]);
        }
        else if(s[i] == ')')
        {
            if(stk.top() == '(')
            {
                stk.pop();
            }
            else
            {
                stk.push(s[i]);
            }
        }
        else if(s[i] == '}')
        {
            if(stk.top() == '{')
            {
                stk.pop();
            }
            else
            {
                stk.push(s[i]);
            }
        }
        else if(s[i] == ']')
        {
            if(stk.top() == '[')
            {
                stk.pop();
            }
            else
            {
                stk.push(s[i]);
            }
        }
        else
        {
            stk.push(s[i]);
        }
    }
    if(stk.empty())
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}
