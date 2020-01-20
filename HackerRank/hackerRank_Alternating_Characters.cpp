#include <bits/stdc++.h>
using namespace std;
#define sfn scanf("%d",&n)

int main()
{
    int n;
    sfn;
    while(n--)
    {
        string s;
        int dlt = 0, sz;
        cin >> s;
        sz = s.size();

        for(int i = 1; i < sz; i++)
        {
            if(s[i] == s[i-1])
            {
                dlt++;
            }
        }
        cout << dlt << endl;
    }
}
