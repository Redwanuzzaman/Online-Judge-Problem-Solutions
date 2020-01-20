#include <bits/stdc++.h>
using namespace std;

bool isBalanced(string s)
{
    stack <char> stk;
    char x;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(' or s[i] == '{' or s[i] == '[') stk.push(s[i]);
        else if(stk.empty()) return false;
        else
        {
            if(s[i] == ')')
            {
                x = stk.top();
                stk.pop();
                if(x != '(') return false;
            }
            else if(s[i] == '}')
            {
                x = stk.top();
                stk.pop();
                if(x != '{') return false;
            }
            else
            {
                x = stk.top();
                stk.pop();
                if(x != '[') return false;
            }
        }
    }
    return stk.empty();
}

int main()
{
    int t;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> s;
        if(isBalanced(s)) cout << "YES\n";
        else cout << "NO\n";
    }
}
