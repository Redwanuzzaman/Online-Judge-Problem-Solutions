#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, tv, sum = 0;
    cin >> m >> n;
    priority_queue <int> pq;
    while(m--)
    {
        cin >> tv;
        if(tv < 0) pq.push(tv*(-1));
    }
    while(!pq.empty())
    {
        n--;
        sum += pq.top();
        pq.pop();
        if(n < 1) break;
    }
    cout << sum << endl;
}
