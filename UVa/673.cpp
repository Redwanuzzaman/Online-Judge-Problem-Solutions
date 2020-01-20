#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    getchar();
    while(t--)
    {
        string str;
        getline(cin,str);
        stack <char> pts;

        for(int i = 0; i < str.size(); i++)
        {
            if(!pts.empty() && str[i] == ')' && pts.top() == '(') pts.pop();
            else if(!pts.empty() && str[i] == ']' && pts.top() == '[') pts.pop();
            else pts.push(str[i]);
        }
        if(pts.empty()) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
