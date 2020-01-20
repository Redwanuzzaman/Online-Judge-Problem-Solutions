#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, x, out;
    string s;
    cin >> n;
    pair <string, ll> p[n];

    for(ll i = 0; i < n; i++)
    {
        cin >> s >> x;
        p[i].first = s;
        p[i].second = x;
    }
    cin >> out;
    for(ll i = n-1; i >= 0; i--)
    {
        if(p[i].first == "divide") out *= p[i].second;
        else if(p[i].first == "multiply") out /= p[i].second;
        else if(p[i].first == "add") out -= p[i].second;
        else out += p[i].second;
    }
    cout << out << endl;
}
