#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    set <int> s;
    cin >> n >> m;
    int inp[n+1], sz[n+1];
    for(int i = 1; i <= n; i++) cin >> inp[i];
    for(int i = n; i >= 1; i--)
    {
        s.insert(inp[i]);
        sz[i] = s.size();
    }
    for(int i = 1; i <= m; i++)
    {
        int element;
        cin >> element;
        cout << sz[element] << endl;
    }
    return 0;
}
