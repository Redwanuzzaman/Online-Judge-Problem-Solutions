#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    map <string, string> mp;
    mp["1"] = "Spring";
    mp["2"] = "Summer";
    mp["3"] = "Autumn";
    mp["115"] = "CSE";
    mp["141"] = "EEE";
    mp["116"] = "BBA";
    mp["117"] = "LLB";
    mp["114"] = "English";
    mp["111"] = "Economics";

    while(n--)
    {
        cin >> s;
        string tmp = "", yr = "20", sess;
        for(int i = 4; i < 7; i++) tmp += s[i];
        yr += s[0];
        yr += s[1];
        sess = s[2];
        cout << mp[tmp] << " " << mp[sess] << " " << yr << endl;
    }
}
