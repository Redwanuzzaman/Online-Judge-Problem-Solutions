#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str, s, a = "", d = "";
    while(n--)
    {
        a.clear();
        d.clear();
        cin >> str;
        s = str;
        sort(s.begin(), s.end());
        for(int i = 0; i < s.size(); i++)
        {
            if(s[i] >= 'a' && s[i] <= 'z') a += s[i];
            else d += s[i];
        }
        for(int i = 0, j = 0, k = 0; i < s.size(); i++)
        {
            if(str[i] >= 'a' && str[i] <= 'z')
            {
                cout << a[j];
                j++;
            }
            else
            {
                cout << d[k];
                k++;
            }
        }
        cout << endl;
    }
}

