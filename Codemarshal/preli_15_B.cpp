#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, cs = 1;
    cin >> t;
    while(t--)
    {
        cin >> n;
        string s[n], rem;
        vector <string> v;
        for(int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        cin >> rem;

        for(int i = 0; i < n; i++)
        {
            int c = 0;
            for(int j = 0; j < s[i].size(); j++)
            {
                if(rem[j] != s[i][j])
                {
                    c++;
                }
            }
            if (c <= 1)
            {
                v.push_back(s[i]);
            }
        }
        cout << "Case " << cs++ << ":\n";
        for(int i = 0; i < v.size(); i++)
        {
            cout << v[i] << endl;
        }
        v.clear();
    }
}

