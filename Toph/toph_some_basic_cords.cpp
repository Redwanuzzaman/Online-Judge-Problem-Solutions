#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cs = 1, t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        string s[n];
        for(int i = 0; i < n; i++) cin >> s[i];
        printf("Case %d: ", cs++);
        if(n == 5)
        {
            if(s[0][0] == 'x') cout << "A-major\n";
            else cout << "E-minor\n";
        }
        else if(n == 8)
        {
            if(s[0][0] == 'x' && s[0][1] == 'x') printf("D-major\n");
            else if(s[0][0] == 'x') printf("A-minor\n");
            else if(s[6][5] == '1') printf("E-major\n");
            else printf("G-major\n");
        }
        else
        {
            if(s[0][0] == 'x' && s[0][1] == 'x' && s[9][4] == '1') printf("B-minor\n");
            else if(s[0][0] == 'x' && s[0][1] == 'x' && s[9][4] == '0')printf("D-minor\n");
            else if(s[0][0] == 'x' && s[6][2] == '0') printf("C-major\n");
            else printf("F-major\n");
        }
    }
}
