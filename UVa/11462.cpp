#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n && n > 0)
    {
        vector <int> v;
        int k;
        for(int i = 0; i < n; i++)
        {
            cin >> k;
            v.push_back(k);
        }
        sort(v.begin(),v.end());
        for(int i = 0; i < v.size(); i++)
        {
            if(i == v.size()-1) cout << v[i] << endl;
            else cout << v[i] << " ";
        }
    }
}
