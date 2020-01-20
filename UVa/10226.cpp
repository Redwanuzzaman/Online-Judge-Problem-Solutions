#include<bits/stdc++.h>
using namespace std;

int  main() {
    int test;
    string sp;
    scanf("%d\n",&test);

    while(test--)
    {
        map <string,double> mp;
        map <string,double> :: iterator it;
        int cnt = 0;
        while(1)
        {
            getline(cin, sp);
            if(sp[0] == '\0') break;
            mp[sp]++;
            cnt++;
        }
        for(it = mp.begin(); it != mp.end(); it++)
        {
            cout << it->first << " " << fixed << setprecision(4) << ((it->second/cnt) * 100.0) << endl;
        }
        if(test > 0) cout << endl;
    }
}
