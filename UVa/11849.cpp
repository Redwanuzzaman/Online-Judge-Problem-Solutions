#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int  main() {
    ll p1, p2, cd;
    while((cin >> p1 >> p2) && (p1 && p2)){
        ll cnt = 0;
        set <ll> st;
        while(p1--){
            cin >> cd;
            st.insert(cd);
        }
        while(p2--){
            cin >> cd;
            if(st.count(cd)) cnt++;
        }
        cout << cnt << endl;
    }
}
