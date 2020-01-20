#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, div;
    vector <long long> v;
    while(cin >> n)
    {
        if(n < 0) break;
        else if(n == 0) cout << "0" << endl;
        else
        {
            while(n)
            {
                div = n % 3;
                n /= 3;
                v.push_back(div);
            }
            for(long long i = v.size()-1; i >= 0; i--) cout << v[i];
            cout << endl;
            v.clear();
        }
    }
}
