#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int > mp;
    mp["JAN"] = 31;
    mp["FEB"] = 28;
    mp["MAR"] = 31;
    mp["APR"] = 30;
    mp["MAY"] = 31;
    mp["JUN"] = 30;
    mp["JUL"] = 31;
    mp["AUG"] = 31;
    mp["SEP"] = 30;
    mp["OCT"] = 31;
    mp["NOV"] = 30;
    mp["DEC"] = 31;

    int test;
    cin >> test;

    while(test--)
    {
        int res = 0;
        string month, day;
        cin >> month >> day;
        if(mp[month] == 31 && day == "THU")
            res = 10;
        else if(mp[month] == 31 && day == "WED")
            res = 9;
        else if(mp[month] == 30 && day == "THU")
            res = 9;
        else if(mp[month] == 30 && day == "FRI")
            res = 10;
        else if(mp[month] == 31 && day == "FRI")
            res = 10;
        else if(mp[month] == 30 && day == "SAT")
            res = 9;
        else if(mp[month] == 31 && day == "SAT")
            res = 9;
        else res = 8;
        cout << res << endl;
    }
}
