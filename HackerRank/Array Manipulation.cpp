#include <bits/stdc++.h>
using namespace std;

vector < pair <int, int> > v;

bool cmp(pair <int, int> a, pair <int, int> b)
{
    if(a.first == b.first)
    {
        return a.second < b.second;
    }
    return a.first < b. first;
}

int main()
{
    int n, m, a, b, k;
    long long mx = -1, sum = 0;
    scanf("%d %d", &n, &m);

    for(int i = 0; i < m; i++)
    {
        scanf("%d %d %d", &a, &b, &k);
        v.push_back(make_pair(a, k));
        v.push_back(make_pair(b+1, -1 * k));
    }

    sort(v.begin(), v.end(), cmp);

    for(int i = 0; i < m*2; i++)
    {
        sum += v[i].second;
        mx = max(mx, sum);
    }

    printf("%lld\n", mx);
}
