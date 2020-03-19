#include <bits/stdc++.h>

using namespace std;


int handshake(int n) {
    int ans = (n * (n-1)) / 2;
    return ans;
}

int main()
{
    int t;
    cin >> t;

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        int result = handshake(n);

        cout << result << "\n";
    }
    return 0;
}
