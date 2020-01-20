#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, x, sum = 0;
    cin >> k >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        sum += x;
        if(sum > k) sum -= k;
        else sum = 0;
    }
    cout << sum << endl;
}
