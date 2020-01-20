#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, plyr, pos, pass;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> plyr >> pos >> pass;
        int mod = pass % plyr;
        if(mod + pos == plyr) cout << "Case " << i << ": " << plyr << endl;
        else cout << "Case " << i << ": " << ((mod + pos) % plyr) << endl;
    }
}
