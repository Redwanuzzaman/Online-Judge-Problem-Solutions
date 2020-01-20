#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, tl, ml, time, memory, diff;
    cin >> n >> tl >> ml;
    while(n--)
    {
        cin >> diff >> time >> memory;
        if(time > tl) return cout << "CLE\n", 0;
        else if(memory > ml) return cout << "MLE\n", 0;
        else if(diff > 0) return cout << "WA\n", 0;
    }
    cout << "AC\n";
}
