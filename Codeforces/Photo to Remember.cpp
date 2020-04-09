#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
    ll n, sum = 0, mx1, mx2, res, i,tmp = 0;
    cin >> n;
    ll wd[n+2] = {0}, ht[n+2] = {0}, s[n+2] = {0};
    for(ll i = 1; i <= n; i++){
        cin >> wd[i] >> ht[i];
        sum += wd[i];
        s[i] = s[i-1] + wd[i];
        if(ht[i] > tmp) tmp = ht[i], mx1 = i;
    }
    tmp = 0;
    for(i = 1; i <= n; i++){
        if(i == mx1) continue;
        if(ht[i] > tmp) tmp = ht[i], mx2 = i;
    }
    for(i = 1; i <= n; i++){
        if(i == mx1){
            res = (sum - (s[i] - s[i-1])) * ht[mx2];
            cout << res << " ";
        }
        else{
            res = (sum - (s[i] - s[i-1])) * ht[mx1];
            cout << res << " ";
        }
    }
}
