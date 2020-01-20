#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, group;
    string s;
    while(1){
        cin >> n;
        if(n == 0) break;
        cin >> s;
        group = s.size()/n;
        for(int i = 0; i < s.size(); i += group){
            reverse(s.begin()+i, s.begin()+i+group);
        }
        cout << s << endl;
    }
}
