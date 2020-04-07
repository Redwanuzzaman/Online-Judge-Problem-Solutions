// Fully Solved
// Codejam 2019, Round 0, Problem B

#include <bits/stdc++.h>
using namespace std;

#define sft scanf("%d",&t)
#define sfn scanf("%d",&n)

int main()
{
    int t, n;
    sft;
    for(int i = 1; i <= t; i++)
    {
        sfn;
        string s;
        cin >> s;
        printf("Case #%d: ", i);
        for(int j = 0; j < s.size(); j++)
        {
            if(s[j] == 'E') cout << 'S';
            else cout << 'E';
        }
        cout << endl;
    }
}
