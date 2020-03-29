#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    for(int i = 1; i <= n; i++){
        cin >> k;
        if(k%2 == 0) cout << k-1 << " ";
        else cout << k << " ";
    }
}
