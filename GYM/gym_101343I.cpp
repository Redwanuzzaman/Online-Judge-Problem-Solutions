#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, tmp;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> x;
            if(j == i)
            {
                tmp = sqrt(x);
            }
        }
        v.push_back(tmp);
    }
    for(int i = 0; i < v.size()-1; i++)
    {
        cout << v[i] << " ";
    }
    cout << v[v.size() - 1] << endl;
}
