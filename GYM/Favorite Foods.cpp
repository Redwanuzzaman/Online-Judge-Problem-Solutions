#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, rating, mx = -1000000000, mn = 1000000000;
    cin >> n;
    string s, max_string, min_string;

    for(int i = 0; i < n; i++)
    {
        cin >> s >> rating;
        if(rating >= mx)
        {
            max_string = s;
            mx = rating;
        }
        if(rating <= mn)
        {
            min_string = s;
            mn = rating;
        }
    }
    cout << min_string << " " << max_string << endl;
}
