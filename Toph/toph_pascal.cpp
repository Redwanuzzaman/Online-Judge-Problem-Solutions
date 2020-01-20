#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll pascal[31];
    pascal[1] = 1;
    for(ll i = 2; i < 31; i++) pascal[i] = pascal[i-1] * 2;
    cout << pascal[n] << endl;
}

