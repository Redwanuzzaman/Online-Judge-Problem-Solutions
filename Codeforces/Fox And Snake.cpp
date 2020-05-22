#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    string s1(m,'#'), s2(m-1, '.');
    for(int i = 1; i <= n; i++)
    {
        if(i % 4 == 1 || i % 4 == 3) cout << s1 << endl;
        else if(i % 4 == 2) cout << s2 << "#" << endl;
        else cout << "#" << s2 << endl;
    }
}
