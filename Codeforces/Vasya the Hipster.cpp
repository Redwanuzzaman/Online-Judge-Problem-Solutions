#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int mn = min(n,m);
    int mx = max(m,n);
    cout << mn << " " << (mx-mn) / 2;
}
