#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        double n, f;
        cin >> n;
        f = (n - 2) * 180 / n;
        printf("%0.5lf\n",f);
    }
}
