#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    getchar();
    getline(cin, s);
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            if(s[i] - n < 97)
            {
                int tmp = s[i] - 97;
                int tmp2 = n - tmp;
                int pos = 123-tmp2;
                s[i] = pos;
            }
            else s[i] -= n;
        }
    }
    cout << s << endl;
}
