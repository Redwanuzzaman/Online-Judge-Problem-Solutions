#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, add = 1, init = 1;
    cin >> n;
    for(int i = 1; i < n; i++)
    {
        int next = (init + add) % n;
        if(next == 0)
        {
            cout << n;
            init = n;
        }
        else
        {
            cout << next;
            init = next;
        }
        add++;
        (i == n-1) ? cout << endl : cout << " ";
    }
}
