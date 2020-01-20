#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n && n)
    {
        int sum = 0;
        for(int i = 1; i < n; i++)
        {
            for(int j = i+1; j <= n; j++)
            {
                int gcd = __gcd(i,j);
                sum += gcd;
            }
        }
        cout << sum << endl;
    }
}
