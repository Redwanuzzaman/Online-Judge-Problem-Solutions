// Litsey o`quvchilar uchun, problem: (B) Chocolate

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k, i = 0;
    cin >> n >> m >> k;
    string s;
    while(n--)
    {
        cin >> s;
        if(k != 0 && s != "Mars") k--;
        else if(m != 0) m--;
    }
    cout << m+k << endl;
    return 0;
}
