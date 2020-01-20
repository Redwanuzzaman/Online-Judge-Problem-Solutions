#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string password, s;
//    getchar();
//    getline(cin, password);
    cin >> s;
    string sc = "!@#$%^&*()-+";
    int u = 0, l = 0, d = 0, sp = 0;
    int c = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            if(!u)
            {
                c++;
                u = 1;
            }
        }
        else if(s[i] >= 'a' && s[i] <= 'z')
        {
            if(!l)
            {
                c++;
                l = 1;
            }
        }
        else if(s[i] >= '0' && s[i] <= '9')
        {
            if(!d)
            {
                c++;
                d = 1;
            }
        }

        if(!sp)
        {
            for(int j = 0; j < sc.size(); j++)
            {
                if(sc[j] == s[i])
                {
                    c++;
                    sp = 1;
                    break;
                }
            }
        }

    }
    int rem = 4 - c;
    int ps = n+rem;
    int ans2 = 6-n;
    int ans = max(ans2, rem);
    //cout << n << " " << rem << endl;
    if(n > 5)
        cout << rem << endl;
    else if(n < 6)
        cout <<  ans << endl;
    return 0;
}
