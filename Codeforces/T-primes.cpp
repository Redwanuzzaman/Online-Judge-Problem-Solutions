#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll Max = 1000001;
int arr[Max];

void seive()
{
    arr[1] = 1;
    for(ll i = 2; i * i <= Max; i++)
        for(ll j = i * 2; j <= Max; j += i) arr[j] = 1;
}
int main()
{
    seive();
    ll n, inp, root;
    cin >> n;
    while(n--)
    {
        cin >> inp;
        root = sqrt(inp);
        if(root * root == inp && !arr[root]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
