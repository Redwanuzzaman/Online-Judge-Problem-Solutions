#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,l,tst,m;
    char a, b, x[100];
    string s;
    cin >> tst;
    while(tst--)
    {
        cin >> s >> n;
        for(i = 65; i < 96; i++) x[i] = i;//, cout << x[i] << endl
        while(n--)
        {
            cin >> a >> b;
            for(i = 'A'; i <= 'Z'; i++)
            {
                if(x[i] == b) x[i] = a;
            }
        }
        for(i = 0; i < s.size(); i++)
        {
            cout << x[s[i]];
        }
        cout << endl;
    }
    return 0;
}
