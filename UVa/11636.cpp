#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, cs = 1;
    while(cin >> n && n > -1)
    {
        cout << "Case " << cs++ << ": " << ceil(log2(n)) << endl;
    }
}
