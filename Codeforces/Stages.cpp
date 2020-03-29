#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, ton = 0, asc, taken = 0;
    string s;
    cin >> n >> k >> s;
    sort(s.begin(), s.end());
    queue <int> q;
    asc = s[0];
    q.push(asc);
    ton += asc - 96;
    taken++;
    for(int i = 1; i < s.size(); i++)
    {
        if(taken == k) break;
        else
        {
            asc = s[i];
            if(asc > q.front()+1)
            {
                q.pop();
                ton += asc - 96;
                taken++;
                q.push(asc);
            }
        }
    }
    if(taken < k) cout << "-1" << endl;
    else cout << ton << endl;
}
