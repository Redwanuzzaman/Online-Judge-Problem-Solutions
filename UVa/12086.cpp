#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sft scanf("%lld",&t)
#define sfxy scanf("%lld%lld",&x,&y)
#define sfarr scanf("%lld",&arr[i])
#define Max 200003

ll tree[Max*4];
ll arr[Max];

void init(ll node, ll beg, ll endd)
{
    if(beg == endd)
    {
        tree[node] = arr[beg];
        return;
    }
    ll left = node * 2;
    ll right = left + 1;
    ll mid = (beg + endd) / 2;

    init(left, beg, mid);
    init(right, mid+1, endd);

    tree[node] = tree[left] + tree[right];
}

void update(ll node, ll beg, ll endd, ll x, ll y)
{
    if(beg == x && endd == x)
    {
        tree[node] = y;
        return;
    }
    ll left = node * 2;
    ll right = left + 1;
    ll mid = (beg + endd) / 2;

    if(x <= mid) update(left, beg, mid, x, y);
    else update(right, mid+1, endd, x, y);

    tree[node] = tree[left] + tree[right];
}

ll query(ll node, ll beg, ll endd, ll x, ll y)
{
    if(x > y) return 0;
    if(beg == x && endd == y) return tree[node];

    ll left = node * 2;
    ll right = left + 1;
    ll mid = (beg + endd) / 2;

    ll l = query(left, beg, mid, x, min(y, mid));
    ll r = query(right, mid+1, endd, max(x, mid+1), y);

    return l + r;
}
int main()
{
    ll t, n, cs = 1, x, y, cnt = 0;
    string s;
    while(sft && t)
    {
        for(ll i = 1; i <= t; i++) sfarr;
        init(1, 1, t);
        printf("Case %lld:\n", cs++);
        while(cin >> s)
        {
            if(s[0] == 'E')
            {
                cnt++;
                break;
            }
            else if(s[0] == 'S')
            {
                sfxy;
                update(1, 1, t, x, y);
            }
            else
            {
                sfxy;
                printf("%lld\n", query(1, 1, t, x, y));
            }
        }
        if(cnt < 2) printf("\n");
    }
}
