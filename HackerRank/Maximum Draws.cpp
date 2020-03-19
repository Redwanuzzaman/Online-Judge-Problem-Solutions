#include <bits/stdc++.h>

using namespace std;

int maximumDraws(int n) {
    
    return n+1;
}

int main()
{
    int t;
    cin >> t;

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;

        int result = maximumDraws(n);

        cout << result << "\n";
    }
    return 0;
}
