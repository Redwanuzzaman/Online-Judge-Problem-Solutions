#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, elm, tmp1, tmp2;
    while(cin >> n && n)
    {
        priority_queue <int> pq;
        while(n--)
        {
            cin >> elm;
            pq.push(elm * -1);
        }
        ll sum = 0;
        while(pq.size() > 1)
        {
            tmp1 = pq.top();
            pq.pop();
            tmp2 = pq.top();
            pq.pop();
            sum += (tmp1 + tmp2);
            pq.push(tmp1 + tmp2);
        }
        cout << sum * -1 << endl;
    }
}
