#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int cnt = 0, x;
        for(int i = 0; i < 4; i++)
        {
            cin >> x;
            if(x) cnt++;
        }
        if(cnt == 0) cout << "Typically Otaku" << endl;
        else if(cnt == 1) cout << "Eye-opener" << endl;
        else if(cnt == 2) cout << "Young Traveller\n";
        else if(cnt == 3) cout << "Excellent Traveller\n";
        else cout << "Contemporary Xu Xiake\n";
    }
}
