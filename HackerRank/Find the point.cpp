#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, px, py, qx, qy;
    cin >> n;

    while(n--)
    {
        cin >> px >> py >> qx >> qy;
        cout << ((qx-px)*2)+px << " " << ((qy-py)*2)+py << endl;
    }
}
