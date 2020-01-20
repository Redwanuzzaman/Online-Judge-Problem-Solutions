#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while(cin >> t && t)
    {
        int l, w, h = 0, vlm = 0, maxh = 0, maxv = 0;
        while(t--)
        {
            cin >> l >> w >> h;
            if(h > maxh)
            {
                vlm = l * w * h;
                maxh = h;
            }
            if(maxh == h) vlm = max(vlm, l * w * h);
        }
        cout << vlm << endl;
    }
}
