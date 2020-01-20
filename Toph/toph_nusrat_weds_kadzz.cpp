#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, val, x, c = 0;
    cin >> n;
    map <int, int> mp;
    map <int, int> :: iterator it;

    while(n--)
    {
        cin >> x;
        mp[x]++;
    }
    for(it = mp.begin(); it != mp.end(); it++)
    {
        if(it -> second == 1)
        {
            val = it -> first;
            c++;
        }
    }
    if(c == 1) cout << val << "\nNusrat weds Kadzz!\n";
    else cout << "Sorry Kadzz!\n";

}
