#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, ps, sum = 0, tmp, tmp2, mn, mx;
    cin >> n >> k;
    string s, pw;
    map <int, int> mp;
    for(int i = 0; i < n; i++)
    {
        cin >> s;
        mp[s.size()]++;
    }
    cin >> pw;
    ps = pw.size();
    map <int, int> :: iterator it;
    for(it = mp.begin(); it != mp.end(); it++)
    {
        if(it->first == ps)
        {
            tmp = it->second;
            break;
        }
        else sum += it->second;
    }
    mn = sum / k * 5 + sum + 1;
    tmp2 = sum + tmp;
    mx = (tmp2-1) / k * 5 + tmp2;
    cout << mn << " " << mx << endl;
}
