#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c, res = 0;
    cin >> r >> c;
    char cell;
    set <int> ro, cl;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cin >> cell;
            if(cell == 'S')
            {
                ro.insert(i);
                cl.insert(j);
            }
        }
    }
    res = (r * c) - (ro.size() * cl.size());
    cout << res << endl;
}
