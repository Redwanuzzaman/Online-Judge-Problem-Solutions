#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n < 3) cout << "No" << endl;
    else
    {
        cout << "Yes" << endl << "1 " << n << endl << n-1 << " ";
        for(int i = 1; i < n; i++) cout << i << " ";
    }
}
