#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0, sum = 0;
    cin >> n;
    for(int i = 1; sum <= n; i++)
    {
        if(i%2 == 1 ) sum++;
        else sum += 2;
        if(sum > n) break;
        cnt++;
    }
    cout << cnt << endl;
}
