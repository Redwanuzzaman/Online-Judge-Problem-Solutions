#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    vector <long double> v;
    while(cin >> n)
    {
        double res = sqrt(n);
        v.push_back(res);
    }
    for(int i = v.size()-1; i >= 0; i--)
        cout << fixed << setprecision(4) << v[i] << endl;
}
