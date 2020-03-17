#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q, k, x;
    cin >> n >> q;
    vector <int> v[n];
    for(int i = 0; i < n; i++)
    {
        cin >> k;
        for(int j = 0; j < k; j++)
        {
            cin >> x;
            v[i].push_back(x);
        }
    }   
    for(int i = 0; i < q; i++)
    {
        cin >> k >> x;
        cout << v[k][x] << endl;
    }
    return 0;
}
