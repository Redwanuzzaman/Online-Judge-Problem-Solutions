#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q, x, m;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i++)
    {
        cin >> m;
        v.push_back(m);
    }
    cin >> q;
    while(q--)
    {
        cin >> x;
        auto pos = lower_bound(v.begin(), v.end(), x);
        if(binary_search(v.begin(), v.end(), x))
        {
            cout << "Yes " << pos-v.begin()+1 << endl;
        }
        else 
        {
            cout << "No " << pos-v.begin()+1 << endl;
        }
    }
    return 0;
}
