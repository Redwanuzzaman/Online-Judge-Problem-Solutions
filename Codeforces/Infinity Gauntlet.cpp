#include <bits/stdc++.h>
using namespace std;

int main()
{
    map <string,string> mp;
    map <string,string> :: iterator it;
    mp["purple"] = "Power";
    mp["green"] = "Time";
    mp["blue"] = "Space";
    mp["orange"] = "Soul";
    mp["red"] = "Reality";
    mp["yellow"] = "Mind";

    int n;
    string s;
    cin >> n;
    while(n--){
        cin >> s;
        mp.erase(s);
    }
    cout << mp.size() << endl;
    for(it = mp.begin(); it != mp.end(); it++) cout << it->second << endl;
}
