// 2013-2014 ACM-ICPC Pacific Northwest Regional Contest, problem: (F) Federation Favorites

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int sum = 0;
        if(n == -1) break;
        vector <int> v;
        for(int i = 1; i < n; i++)
        {
            if(n % i == 0)
            {
                sum += i;
                v.push_back(i);
            }
        }
            if(sum == n)
            {
                cout << n << " = ";
                for(int i = 0; i < v.size(); i++)
                {
                    if(i == v.size()-1) cout << v[i] << endl;
                    else cout << v[i] << " + ";
                }
            }
            else cout << n << " is NOT perfect." << endl;

    }
}
